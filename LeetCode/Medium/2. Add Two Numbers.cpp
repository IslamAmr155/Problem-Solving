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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* main = l2;
        while(l1 != NULL && main != NULL)
        {
            main->val += l1->val;
            ListNode* p = main;
            while(p != NULL && p->val > 9)
            {
                if (p->next != NULL)
                {
                    p->val -= 10;
                    p->next->val += 1;
                }
                else if (p->next == NULL)
                {
                    p->val -= 10;
                    p->next = new ListNode(1);
                }
                p = p->next;
            }
            if (l1->next != NULL && main->next == NULL)
            {
                main -> next = l1 -> next;
                main = NULL;
                break;
            }
            main = main->next;
            l1 = l1->next;
        }
        if (main != NULL && main->val > 9 && main->next != NULL)
        {
            main->val -= 10;
            main->next->val += 1;
        }
        else if (main != NULL && main->val > 9 && main->next == NULL)
        {
            main->val -= 10;
            main->next = new ListNode(1);
        }
        return l2;
    }
};