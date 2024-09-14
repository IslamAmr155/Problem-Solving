class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int ans = 0;
        for (int i = 0;i<nums.size();i++) {
            queue<int> q;
            ans += nums[i];
            q.push(nums[i]);
            for (int j=i+1;j<nums.size();j++) {
                int n = q.size(), temp;
                while(n--) {
                    temp = q.front() ^ nums[j];
                    ans += temp;
                    q.push(q.front());
                    q.push(temp);
                    q.pop();
                }
            }
        }
        return ans;
    }
};