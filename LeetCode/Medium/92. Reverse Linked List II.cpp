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
    void rev(ListNode* & start, ListNode* & mid, ListNode* & end)
    {
        if (mid == end)
        {
            mid->next = start;
            return;
        }
        rev (start->next, mid->next, end);
        mid->next = start;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right)
            return head;
        ListNode* first = head;
        int i = 1;
        while (i < left-1)
        {
            first = first->next;
            i++;
        }
        ListNode* last = first;
        while (i < right)
        {
            last = last->next;
            i++;
        }
        ListNode* end = last->next;
        if (left != 1)
        {
            rev(first->next,first->next->next,last);
            first->next->next = end;
            first->next = last;
            return head;
        }
        rev(first,first->next,last);
        first->next = end;
        return last;
    }
};