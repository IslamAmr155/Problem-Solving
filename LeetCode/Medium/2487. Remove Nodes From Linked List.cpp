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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> s;
        ListNode* prev = head, *cur = head;
        while (cur->next) {
            if (cur->val < cur->next->val) {
                if (head == cur) {
                    head = cur->next;
                    prev = cur = head;
                }
                else {
                    prev->next = cur->next;
                    cur = prev;
                    prev = s.top();
                    s.pop();
                }
            }
            else {
                s.push(prev);
                prev = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};