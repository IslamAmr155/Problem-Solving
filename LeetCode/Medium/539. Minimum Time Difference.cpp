class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        sort(timePoints.begin(), timePoints.end());
        int ans = INT_MAX, prev = 0, cur = (timePoints[0][0] - '0') * 600 + (timePoints[0][1] - '0') * 60 + (timePoints[0][3] - '0') * 10 + (timePoints[0][4] - '0'), first = cur;
        for (int i = 1;i<timePoints.size();i++) {
            prev = cur;
            cur = (timePoints[i][0] - '0') * 600 + (timePoints[i][1] - '0') * 60 + (timePoints[i][3] - '0') * 10 + (timePoints[i][4] - '0');
            ans = min(ans, min(abs(cur - prev), 1440 - abs(cur - prev)));
        }
        ans = min(ans, min(abs(cur - first), 1440 - abs(cur - first)));
        return ans;
    }
};