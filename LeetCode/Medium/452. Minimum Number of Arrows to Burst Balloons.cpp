class Solution {
public:
    static bool sortcol(const vector<int>& v1, const vector<int>& v2)
    {
        return v1[1] < v2[1];
    }

    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        if (n == 0)
            return 0;
        sort(points.begin(), points.end(), sortcol);
        int a = points[0][1], c = 1;
        for (int i=1;i<n;i++)
        {
            if (a >= points[i][0])
                continue;
            c++;
            a = points[i][1];
        }
        return c;
    }
};