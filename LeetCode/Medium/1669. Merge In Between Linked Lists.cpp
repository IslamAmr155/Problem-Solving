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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        int c = 0;
        while (++c != a) temp = temp->next;
        ListNode* end = temp->next;
        temp->next = list2;
        while (temp->next) temp = temp->next;
        while (c++ != b) end = end->next;
        temp->next = end->next;
        return list1;
    }
};