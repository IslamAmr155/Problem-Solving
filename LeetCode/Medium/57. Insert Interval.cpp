class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size(), i = 0;
        if (n == 0)
            return {newInterval};

        if (newInterval[0] < intervals[0][0] && newInterval[1] < intervals[0][0])
        {
            intervals.insert(intervals.begin(), newInterval);
            return intervals;
        }
        else if (newInterval[0] > intervals[n-1][1] && newInterval[1] > intervals[n-1][1])
        {
            intervals.push_back(newInterval);
            return intervals;
        }

        for (;i<n;i++)
        {
            if (intervals[i][0] <= newInterval[0] && intervals[i][1] >= newInterval[0])
            {
                if (intervals[i][1] >= newInterval[1])
                    return intervals;
                else
                {
                    intervals[i][1] = newInterval[1];
                    break;
                }
            }
            else if (intervals[i][0] >= newInterval[0])
            {
                intervals[i][0] = newInterval[0];
                if (intervals[i][1] >= newInterval[1])
                    return intervals;
                else
                {
                    intervals[i][1] = newInterval[1];
                    break;
                }
            }
            if (intervals[i][1] < newInterval[0] && intervals[i+1][0] > newInterval[1])
            {
                intervals.insert(intervals.begin() + i+1, newInterval);
                return intervals;
            }
        }

        for (;i<n-1;i++)
        {
            if (intervals[i][1] >= intervals[i+1][0])
            {
                intervals[i][1] = max(intervals[i][1], intervals[i+1][1]);
                intervals.erase(intervals.begin() + i+1);
                i--;
                n--;
            }
            else
                break;
        }
        return intervals;
    }
};