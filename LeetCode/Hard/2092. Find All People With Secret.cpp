class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        vector<int> ans;
        vector<bool> s(n);
        vector<vector<vector<int>>> v(n);
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> q;
        for (vector<int> x : meetings) 
        {
            v[x[0]].push_back({x[2],x[1]});
            v[x[1]].push_back({x[2],x[0]});
        }
        q.push({0,0});
        q.push({0,firstPerson});
        while (!q.empty())
        {
            vector<int> x = q.top();
            q.pop();
            if (s[x[1]]) continue;
            s[x[1]] = 1;
            ans.push_back(x[1]);
            for (vector<int> y : v[x[1]])
                if (!s[y[1]] && x[0] <= y[0]) q.push({y[0],y[1]});
        }
        return ans;
    }
};