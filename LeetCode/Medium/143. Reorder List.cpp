/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* h = head, *temp = head;
        stack<ListNode*> s;
        while (temp)
        {
            s.push(temp);
            temp = temp->next;
        } 
        int n = s.size() % 2 == 0 ? s.size()/2 - 1 : s.size()/2;
        for (int i = 0; i < n; i++)
        {
            temp = h->next;
            h->next = s.top();
            s.top()->next = temp;
            h = temp;
            s.pop();  
        }
        s.top()->next = NULL;
    }
};