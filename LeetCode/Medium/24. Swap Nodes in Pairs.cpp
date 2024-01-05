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
    ListNode* swapPairs(ListNode* head) {
        if (!head) return head;
        ListNode* temp = new ListNode(0,head), *p = head, *q = head->next;
        if (!q)
            return head;
        head = q;
        while (q)
        {
            p->next = q->next;
            q->next = p;
            temp->next = q;
            temp = p;
            p = temp->next;
            q = p ? p->next : NULL;
        }
        return head;
    }
};