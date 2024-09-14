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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* cur = head->next;
        int ma = INT_MIN, mi = INT_MAX, f = 0, e, prev = head->val, i = 1;
        while (cur->next) {
            if ((cur->val < prev && cur->val < cur->next->val) || (cur->val > prev && cur->val > cur->next->val)) {
                if (!f) f = i;
                else {
                    ma = max(ma,i - f);
                    mi = min(mi,i - e);
                }
                e = i;
            }
            prev = cur->val;
            cur = cur->next;
            i++;
        }
        if (ma == INT_MIN) return {-1,-1};
        return {mi,ma};
    }
};