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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* first = head, *second = head->next;
        while (second) {
            int val = __gcd(first->val, second->val);
            ListNode* t = new ListNode(val, second);
            first->next = t;
            first = second;
            second = second->next;
        }
        return head;
    }
};