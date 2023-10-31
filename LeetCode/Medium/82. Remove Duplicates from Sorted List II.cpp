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
        if (!head)
            return head;
        int val = head->val;
        ListNode* temp = head;
        while (temp)
        {
            if (temp->val == val)
                temp = temp->next;
            else if (head->next == temp)
                break;
            else
            {
                head = temp;
                val = temp->val;
                temp = temp->next;
            }
        }
        if (!head || !head->next)
            return head;
        if (!temp)
            return NULL;
        ListNode* pre = head;
        temp = head->next;
        val = temp->val;
        temp = temp->next;
        while (temp)
        {
            if (temp->val == val)
                temp = temp->next;
            else if (pre->next->next == temp)
            {
                pre = pre->next;
                val = temp->val;
                temp = temp->next;
            }
            else
            {
                pre->next = temp;
                val = temp->val;
                temp = temp->next;
            }
        }
        if (pre->next->next)
            pre->next = NULL;
        return head;
    }
};