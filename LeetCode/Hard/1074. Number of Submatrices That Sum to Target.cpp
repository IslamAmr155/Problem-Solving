class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int ans = 0, n = matrix.size(), m = matrix[0].size();
        for (int i = 0;i<n;i++)
            for (int j = 1;j<m;j++)
                matrix[i][j] += matrix[i][j-1]; 
        unordered_map<int,int> map;
        for (int i = 0;i<m;i++)
        {
            for (int j = i;j<m;j++)
            {
                map.clear();
                int x = 0;
                for (int k=0;k<n;k++)
                {
                    x += matrix[k][j] - (i > 0 ? matrix[k][i - 1] : 0);
                    if (x == target) ans++;
                    if (map.find(x-target) != map.end()) ans += map[x-target];
                    map[x]++;
                }
            }
        }
        return ans;
    }
};