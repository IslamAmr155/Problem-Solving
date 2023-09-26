class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int n = citations.size(), m = 0;
        for (int i=0;i<n;i++)
        {
            int c = citations[i], size = n - i;
            if (c >= size)
                m = max(m,size);
        }
        return m;
    }
};