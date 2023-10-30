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
    void rec(ListNode* &temp, int& n, int i)
    {
        if (!temp)
        {
            n = i - n - 1;
            return;
        }
        rec(temp->next, n, i+1);
        if (n >= 0 && i == n)
            temp->next = temp->next->next;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        rec(temp, n, 0);
        if (n < 0)
            return head->next;
        return head;
    }
};