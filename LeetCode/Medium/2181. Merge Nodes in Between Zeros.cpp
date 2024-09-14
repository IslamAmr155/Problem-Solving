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
    ListNode* mergeNodes(ListNode* head) {
        int sum = 0;
        ListNode* temp = head, *cur = head->next;
        while (cur->next) {
            if (cur->val == 0) {
                temp->val = sum;
                sum = 0;
                temp->next = cur;
                temp = temp->next;
            }
            else sum += cur->val;
            cur = cur->next;
        }
        temp->val = sum;
        temp->next = NULL;
        return head;
    }
};