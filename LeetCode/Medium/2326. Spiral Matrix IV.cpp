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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m,vector<int>(n,-1)), dir = {{0,1},{1,0},{0,-1},{-1,0}};
        int i = 0, j = 0, d = 0;
        while (head) {
            ans[i][j] = head->val;
            int a = i+dir[d][0], b = j+dir[d][1];
            if (min(a,b) < 0 || a == m || b == n || ans[a][b] != -1) ++d %= 4;
            i += dir[d][0];
            j += dir[d][1];
            head = head->next;
        }
        return ans;
    }
};