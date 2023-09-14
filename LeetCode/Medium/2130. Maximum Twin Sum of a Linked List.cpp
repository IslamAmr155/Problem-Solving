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
    void rec(ListNode* &start,ListNode* end,int& sum)
    {
        if (!end)
            return;
        rec(start,end->next,sum);
        sum = max(sum,start->val+end->val);
        start = start->next;
    }

    int pairSum(ListNode* head) {
        ListNode* start = head,*end = head;
        int sum = INT_MIN;
        rec(start,end,sum);
        return sum;
    }
};