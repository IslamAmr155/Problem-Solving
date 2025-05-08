class Solution {
public:
    int minTimeToReach(vector<vector<int>>& moveTime) {
        priority_queue<vector<int>, vector<vector<int>>, greater<>> q;
        q.push({0, 0, 0, 1});
        moveTime[0][0] = 2e9;
        int n = moveTime.size(), m = moveTime[0].size();
        vector<int> v = q.top(), d = {1, 0, -1, 0, 1};
        while (q.top()[1] != n-1 || q.top()[2] != m-1) {
            v = q.top();
            q.pop();
            for (int i = 0;i<4;i++) {
                int x = v[1] + d[i], y = v[2] + d[i+1];
                if (min(x,y) != -1 && x != n && y != m && moveTime[x][y] != 2e9) {
                    q.push({max(moveTime[x][y], v[0]) + v[3], x, y, v[3] ^ 3});
                    moveTime[x][y] = 2e9;
                }
            }
        }
        return q.top()[0];
    }
};