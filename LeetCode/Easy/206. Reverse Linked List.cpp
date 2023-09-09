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
    void rec(ListNode*& cur,ListNode* prev,ListNode*& head)
    {
        if (cur == NULL)
            return;
        rec(cur->next,cur,head);
        if (cur->next == NULL)
            head = cur;
        cur -> next = prev;
    }

    ListNode* reverseList(ListNode* head) {
        if (head == NULL)
            return head;
        ListNode* cur = head;
        rec(cur,NULL,head);
        return head;
    }
};