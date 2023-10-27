/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head)
            return NULL;
        Node* ans = new Node(head->val);
        Node* cur = ans, *post = head->next; 
        unordered_map<Node*, Node*> m;
        m[head] = cur;
        while (post)
        {
            Node* n = new Node(post->val);
            m[post] = n;
            cur -> next = n;
            cur = cur -> next;
            post = post -> next;
        }
        cur = head, post = ans;
        while (cur)
        {
            if (cur->random)
                post->random = m[cur->random];
            cur = cur->next;
            post = post->next;
        }
        return ans;
    }
};