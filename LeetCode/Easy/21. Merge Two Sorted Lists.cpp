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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)
            return list2;
        if(list2 == NULL)
            return list1;
        ListNode *r,*s,*q,*p;
        if (list1->val > list2->val){
            p = list1; q = list2;
        }
        else{
            p = list2; q = list1;
        }
        s = q;
        while (p != NULL && q != NULL)
        {   
            if (q->next != NULL && q->next->val < p->val)
                q = q->next;
            else if(p->val >= q->val)
            {
                r = p;
                p = q->next;
                q->next=r;
                q=q->next;
            }
            else if (q -> val > p->val)
            {
                r = q;
                q = p->next;
                p->next=r;
                q=q->next;
            }
        }
        if(q == NULL && p != NULL)
            r->next = p;
        return s;
    }
};