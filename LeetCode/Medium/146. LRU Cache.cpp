class LRUCache {
public:
    struct ListNode {
        int val, key;
        ListNode *next, *prev;
        ListNode(int x, int k, ListNode *next, ListNode* prev) : val(x), key(k), next(next), prev(prev) {}
    }; 

    ListNode* head = NULL, * last = NULL;
    unordered_map<int,ListNode*> m;
    int size = 0;

    LRUCache(int capacity) {
        size = capacity;
    }
    
    int get(int key) {
        if (m.find(key) == m.end()) 
            return -1;
        else if (m[key] == last)
            return m[key]->val;
        else if (m.size() > 1)
        {
            ListNode* temp = m[key];
            if (temp == head) head = head->next;
            if (temp->prev) temp->prev->next = temp->next;
            if (temp->next) temp->next->prev = temp->prev;
            last->next = temp;
            temp->next = NULL;
            temp->prev = last;
            last = temp;
            return temp->val;
        }
        return m[key]->val;
    }
    
    void put(int key, int value) {
        if (m.find(key) != m.end()) 
        {
            ListNode* temp = m[key];
            if (temp == last)
            {
                temp->val = value;
                return;
            }
            m.erase(key);
            if (temp->prev) temp->prev->next = temp->next;
            if (temp->next) temp->next->prev = temp->prev;
            if (head->key == key) head = head->next;
        }
        else if (m.size() == size)
        {
            m.erase(head->key);
            head = head->next;
        }
        ListNode* temp = new ListNode(value, key, NULL, last);
        if (last) last->next = temp;
        last = temp;
        if (m.empty()) head = temp;
        m[key] = temp;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */