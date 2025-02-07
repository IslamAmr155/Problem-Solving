class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int,int> m, c;
        vector<int> ans;
        int x = 0;
        for (vector<int>& q : queries) {
            if(--m[c[q[0]]] == 0) x--;
            c[q[0]] = q[1];
            if(++m[q[1]] == 1) x++;
            ans.push_back(x);
        }
        return ans;
    }
};