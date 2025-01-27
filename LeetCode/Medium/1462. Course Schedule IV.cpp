class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<vector<bool>> v(numCourses, vector<bool>(numCourses));
        for (vector<int>& p : prerequisites)
            v[p[0]][p[1]] = 1;
        for (int k = 0;k<numCourses;k++)
            for (int i=0;i<numCourses;i++)
                for (int j = 0;j<numCourses;j++)
                    v[i][j] = v[i][j] || (v[i][k] && v[k][j]);
        vector<bool> ans(queries.size());
        for (int i = 0;i<queries.size();i++)
            ans[i] = v[queries[i][0]][queries[i][1]];
        return ans;
    }
};