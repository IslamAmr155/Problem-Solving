class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
        for (int i = 0;i<nums.size();i++) q.push({nums[i], i});
        while (k--) {
            pair<int,int> p = q.top();
            q.pop();
            nums[p.second] *= multiplier;
            q.push({nums[p.second], p.second});
        }
        return nums;
    }
};