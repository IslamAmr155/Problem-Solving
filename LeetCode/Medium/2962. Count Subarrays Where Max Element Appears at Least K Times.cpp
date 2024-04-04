class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long m = *max_element(nums.begin(),nums.end()), s = 0, n = nums.size();
        long long ans = 0;
        queue<int> q;
        for (int i = 0;i<n;i++)
        {
            if (nums[i] == m) q.push(i);
            if (q.size() == k)
            {
                cout << (q.front() - s + 1) * (n - i) << endl;
                ans += (q.front() - s + 1) * (n - i);
                s = q.front() + 1;
                q.pop();
            }
        }
        return ans;
    }
};