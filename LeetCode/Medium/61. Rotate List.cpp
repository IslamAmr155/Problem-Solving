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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!k || !head) return head;
        ListNode* last = head;
        int n = 1;
        while (last->next)
        {
            n++;
            last = last->next;
        }
        k = k % n;
        if (!k) return head;
        n = n - k - 1;
        last->next = head;
        ListNode* pre = head;
        for (int i=0;i<n;i++)
            pre = pre->next;
        head = pre->next;
        pre->next = NULL;
        return head;
    }
};