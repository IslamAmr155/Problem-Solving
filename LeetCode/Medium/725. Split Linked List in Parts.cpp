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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int c = 0;
        ListNode* temp = head;
        while (temp) c++, temp = temp->next;
        int d = c / k, rem = c % k;
        vector<ListNode*> ans(k,NULL);
        for (int i = 0;i<k && head;i++) {
            ans[i] = head;
            c = d + (rem-- > 0);
            while(--c) head = head->next;
            temp = head;
            head = head->next;
            temp->next = NULL;
        }
        return ans;
    }
};