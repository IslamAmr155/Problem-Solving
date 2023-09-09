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
    bool isPalindrome(ListNode* head) {
        ListNode* s,f,c= head;
        ListNode* p = NULL;
        while(f != NULL)
        {
            p = s;
            s = s->next;
            f = s->next;
        }
        while(s != NULL)
        {
            
        }
    }
};