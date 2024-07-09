class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double ans = 0;
        int end = 1;
        for (auto v : customers) {
            end = max(end, v[0]) + v[1];
            ans += end - v[0]; 
        }
        return ans / customers.size();
    }
};