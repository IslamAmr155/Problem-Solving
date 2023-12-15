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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return head;
        ListNode* temp = head, *cur = head;
        while (temp)
        {
            if (cur->val == temp->val)
                temp = temp->next;
            else
            {
                cur->next = temp;
                cur = temp;
            }
        }
        cur->next = temp;
        return head;
    }
};