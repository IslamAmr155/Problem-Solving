class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> edges(n);
        for (int i = 0;i<n;i++) edges[i].push_back(i+1);
        vector<int> ans;
        for (auto& q : queries) {
            edges[q[0]].push_back(q[1]);
            queue<vector<int>> que;
            que.push({0,0});
            unordered_set<int> s = {0};
            while (que.size()) {
                vector<int> up = que.front();
                int u = up[0], p = up[1];
                que.pop();
                bool found = 0;
                for (int& v : edges[u]) {
                    if (v == n-1) {
                        ans.push_back(p+1);
                        found = 1;
                        break;
                    }
                    if (s.find(v) != s.end()) continue;
                    que.push({v,p+1});
                    s.insert(v);
                }
                if (found) break;
            }
        }
        return ans;
    }
};