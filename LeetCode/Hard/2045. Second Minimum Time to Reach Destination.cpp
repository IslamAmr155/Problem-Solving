class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& edges, int time, int change) {
        vector<vector<int>> adj(n);
        vector<int> a(n, 10001);
        n--;
        for (auto v : edges) {
            adj[v[0] - 1].push_back(v[1] - 1);
            adj[v[1] - 1].push_back(v[0] - 1);
        }
        queue<pair<int, int>> q;
        q.push({0,0});
        bool first = false, second = false;
        int m = 10001;
        while (!q.empty() && !second) {
            pair<int,int> p = q.front();
            int u = p.first, c = ++p.second;
            q.pop();
            if (c == a[u] || c > a[u] + 1) continue;
            a[u] = min(a[u],c);
            for (int v : adj[u]) {
                if (v == n) {
                    if (!first) {
                        first = true;
                        m = c;
                    }
                    else if (first && c > m) {
                        second = true;
                        m = c;
                        break;
                    }
                }
                q.push({v,c});
            } 
        }
        int ans = 0;
        if (!second) m += 2;
        while(m--) {
            if ((ans / change) % 2) {
                ans += change - (ans % change); 
            }
            ans += time;
        }
        return ans;
    }
};