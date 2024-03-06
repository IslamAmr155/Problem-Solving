class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<vector<int>>> f(n);
        for (vector<int> x : flights) f[x[0]].push_back({x[1],x[2]});
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> q;
        vector<vector<int>> v(n,vector<int>(k+2,INT_MAX/2));
        v[src][0] = 0;
        q.push({0,src,0});
        while (!q.empty())
        {
            vector<int> x = q.top();
            q.pop();
            if (x[1] == dst) return x[0];
            if (x[2] == k+1) continue;
            for (auto y : f[x[1]]) 
            {
                if (v[y[0]][x[2]+1] > x[0]+y[1])
                {
                    v[y[0]][x[2]+1] = x[0]+y[1];
                    q.push({x[0]+y[1],y[0],x[2]+1});
                }
            }
        }
        return -1;
    }
};