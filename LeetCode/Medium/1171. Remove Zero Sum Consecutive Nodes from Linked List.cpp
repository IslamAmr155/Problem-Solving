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
    ListNode* removeZeroSumSublists(ListNode* head) {
        int sum = 0;
        ListNode* p = new ListNode(0,head), *temp = p;
        map<int, ListNode*> m;
        while (temp)
        {
            sum += temp->val;
            m[sum] = temp;
            temp = temp->next;
        }
        sum = 0;
        temp = p;
        while (temp)
        {
            sum += temp->val;
            temp->next = m[sum]->next;
            temp = temp->next;
        }
        return p->next;
    }
};