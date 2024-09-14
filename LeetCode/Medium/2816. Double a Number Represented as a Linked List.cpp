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
    int c = 0, n = 0;

    ListNode* doubleIt(ListNode* head) {
        if (!head) return NULL;
        n++;
        doubleIt(head->next);
        n--;
        head->val = head->val * 2 + c;
        c = head->val / 10;
        head->val %= 10;
        if (!n && c) {
            ListNode* temp = new ListNode(c,head);
            head = temp;
        }
        return head;
    }
};