class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;
        for (auto v : matrix) {
            int i = distance(v.begin(),min_element(v.begin(),v.end()));
            ans.push_back(v[i]);
            for (int j = 0;j<matrix.size();j++)
                if (matrix[j][i] > v[i]) {
                    ans.pop_back();
                    break;
                }
        }
        return ans;
    }
};