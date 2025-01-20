class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector<pair<int,int>> c(m*n+1);
        for (int i = 0;i<m;i++) 
            for (int j = 0;j<n;j++) c[mat[i][j]] = {i,j};
        vector<int> rows(m), cols(n);
        for (int i = 0;i<m*n;i++)
            if (++rows[c[arr[i]].first] == n || ++cols[c[arr[i]].second] == m) return i;
        return 0;
    }
};