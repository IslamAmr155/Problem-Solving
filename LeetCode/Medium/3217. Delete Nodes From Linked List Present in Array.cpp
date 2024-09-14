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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int> s(nums.begin(), nums.end());
        ListNode* temp = new ListNode(0, head), *prev = temp;
        while (head) {
            if (s.contains(head->val)) {
                prev->next = head->next;
                head = head->next;
            } else {
                prev = head;
                head = head->next;
            }
        }
        return temp->next;
    }
};