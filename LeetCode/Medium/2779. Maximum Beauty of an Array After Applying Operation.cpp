class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        map<int,int> m;
        for (int& x : nums) {
            m[x-k]++;
            m[x+k+1]--;
        }
        int ans = 0, c = 0; 
        for (auto i = m.begin();i != m.end();i++) {
            c += i->second;
            ans = max(ans,c);
        }
        return ans;
    }
};