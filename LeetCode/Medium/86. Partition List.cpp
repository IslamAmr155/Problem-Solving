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
    ListNode* partition(ListNode* head, int x) {
        if (!head || !head->next) return head;
        ListNode* less = head, *pre = head;
        while (less && less->val >= x)
        {
            pre = less;
            less = less->next;
        }
        if (!less)
            return head;
        if (pre != less)
        {
            pre->next = less->next;
            less->next = head;
            head = less;
        }
        ListNode* cur = pre->next;
        while (cur)
        {
            if (cur->val < x && less->next == cur)
            {
                pre = less = cur;
                cur = cur->next;
            }
            else if (cur->val < x)
            {
                pre->next = cur->next;
                cur->next = less->next;
                less->next = cur;
                less = less->next;
                cur = pre->next;
            }
            else
            {
                pre = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};