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
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next)
            return head;
        ListNode* odd = head,*even = head->next,*head2 = even;
        while (even && even->next)
        {
            odd->next = even->next;
            // if (!odd->next)
            //     break;
            // else
            odd = odd->next;
            // if (!odd->next)
            //     break;
            even->next = odd->next;
            even = even->next; 
        }
        if (even)
            even->next = nullptr;
        odd->next = head2;
        return head;
    }
};