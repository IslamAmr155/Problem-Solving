class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();
        vector<vector<int>> r(n);
        for (int i = 0;i<n;i++) r[i] = {positions[i],healths[i],directions[i] == 'R',i};
        sort(r.begin(),r.end());
        stack<vector<int>> right, left;
        for (int i = 0;i<n;i++) {
            if (r[i][2]) right.push(r[i]);
            else {
                left.push(r[i]);
                while (!right.empty()) {
                    if (left.top()[1] > right.top()[1]) {
                        right.pop();
                        if(!--left.top()[1]) {
                            left.pop();
                            break;
                        }
                    }
                    else if (left.top()[1] < right.top()[1]) {
                        left.pop();
                        if(!--right.top()[1]) right.pop();
                        break;
                    }
                    else {
                        left.pop();
                        right.pop();
                        break;
                    }
                }
            }
        }
        int m = right.size() + left.size();
        if (m == n) return healths;
        else if (!m) return {};
        vector<vector<int>> temp;
        vector<int> ans;
        while (!right.empty()) {
            temp.push_back({right.top()[3],right.top()[1]});
            right.pop();
        } 
        while (!left.empty()) {
            temp.push_back({left.top()[3],left.top()[1]});
            left.pop();
        } 
        sort(temp.begin(),temp.end());
        for (auto v : temp) ans.push_back(v[1]);
        return ans;
    }
};