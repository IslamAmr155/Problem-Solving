class Solution {
public:
    int func(vector<int>& n, int k) {
        unordered_map<int,int> m;
        int s = 0, ans = 0, c = 0;
        for (int i = 0;i<n.size();i++)
        {
            if (!m[n[i]]) c++;
            m[n[i]]++;
            while (c > k && s <= i)
            {
                m[n[s]]--;
                if (!m[n[s]]) c--;
                s++;
            }
            ans += i - s + 1;
        }
        cout << ans << endl;
        return ans;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return func(nums,k) - func(nums,k-1);
    }
};