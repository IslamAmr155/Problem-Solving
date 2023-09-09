class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v{1},m{1};
        for (int i=1;i<=rowIndex;i++)
        {
            v.push_back(1);
            for (int j=1;j<i;j++)
            {
                v[j] = m[j] + m[j-1];
            }
            m = v;
        }
        return v;
    }
};