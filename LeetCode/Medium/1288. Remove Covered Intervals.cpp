class Solution {
public:
    struct cmp
    {
        inline bool operator() (const vector<int>& a, const vector<int>& b)
        {
            if (a[0] < b[0])
                return true;
            else if (a[0] > b[0])
                return false;
            return a[1] < b[1];
        }
    };

    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), cmp());
        int c = 0, ans = 0; 
        for (int i = 1;i < intervals.size(); i++)
        {
            if (intervals[c][0] <= intervals[i][0] && intervals[c][1] >= intervals[i][1])
                ans++;
            else if (intervals[c][0] == intervals[i][0] && intervals[c][1] <= intervals[i][1])
            {
                ans++;
                c = i;
            }
            else
                c = i;
        }
        return intervals.size() - ans;
    }
};