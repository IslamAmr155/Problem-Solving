class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        unordered_map<int,vector<int>> um;
        for (int i=0;i<m;i++)
        {
            for (int j = 0;j<n;j++)
            {
                if (!matrix[i][j])
                    um[i].push_back(j);
            }
        }
        for (auto i = um.begin(); i != um.end(); i++) 
        {
            matrix[i->first] = vector<int> (n,0);
            for (int j : i->second)
                for (int k=0;k<m;k++)
                    matrix[k][j] = 0;
        }
    }
};