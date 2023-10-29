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
    void rev(ListNode* &pre, ListNode* &cur, ListNode* &end)
    {
        if (cur == end)
        {
            cur->next = pre;
            return;
        } 
        rev(cur,cur->next,end);
        cur->next = pre;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        int i = 1, j = 1;
        ListNode* temp = head, *first = head, *pre = head, *last = NULL;
        while (temp)
        {
            temp = temp->next;
            if (temp && i == k*j - j)
            {
                last = temp->next;
                rev(first, first->next,temp);
                first->next = last;
                if (j == 1)
                    head = temp;
                else
                    pre->next = temp;
                pre = first;
                temp = last;
                first = last;
                j++;
            }
            i++;    
        }
        return head;
    }
};