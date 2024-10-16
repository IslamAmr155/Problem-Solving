class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string ans = "";
        vector<vector<int>> p = {{a, 0}, {b, 1}, {c, 2}};
        sort(p.begin(), p.end());
        priority_queue<vector<int>> q;
        for (auto& v:p) if(v[0]) q.push(v);
        while (!q.empty()) {
            vector<int> v = q.top();
            q.pop();
            for (int i = 0;i < 2 && v[0]--;i++) ans += 'a' + v[1];
            if (!q.empty() && v[0] >= q.top()[0]) {
                vector<int> w = q.top();
                q.pop();
                ans += 'a' + w[1];
                w[0]--;
                if(w[0]) q.push(w);
                q.push(v);
            }
            else if (!q.empty() && v[0] > 0) q.push(v);
        } 
        return ans;
    }
};