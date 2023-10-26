/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head)
            return false;
        ListNode *cur = head, *temp = head;
        while (cur)
        {
            if (cur->next == head)
                return true;
            cur = cur->next;
            temp->next = head;
            temp = cur;
        }
        return false;
    }
};