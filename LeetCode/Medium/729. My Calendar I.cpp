class Node {
    public:
        Node* left;
        Node* right;
        int s, e;

        Node (int start, int end) {
            left = right = NULL;
            s = start;
            e = end;
        }
};

class MyCalendar {
public:
    Node* root = NULL;

    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        if (!root) {
            root = new Node(start, end);
            return true;
        }
        Node* temp = root;
        while (temp) {
            if (start >= temp->s) 
                if (end <= temp->e || (start < temp->e && end >= temp->e)) return false;
                else if (!temp->right) {
                    temp->right = new Node(start, end);
                    break;
                }
                else temp = temp->right;
            else 
                if (end > temp->s || end >= temp->e) return false;
                else if (!temp->left) {
                    temp->left = new Node(start, end); 
                    break;
                }
                else temp = temp->left; 
        }
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */