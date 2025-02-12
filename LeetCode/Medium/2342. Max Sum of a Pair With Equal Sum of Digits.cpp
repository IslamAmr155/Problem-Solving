class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,priority_queue<int, vector<int>, greater<>>> m;
        int ans = -1;
        for (int& x : nums) {
            int num = 0, temp = x;
            while (x) {
                num += x % 10;
                x /= 10;
            }
            m[num].push(temp);
            if (m[num].size() > 2) m[num].pop();
            if (m[num].size() == 2) {
                int c = 0;
                temp = m[num].top();
                c += temp;
                m[num].pop();
                c += m[num].top();
                ans = max(ans,c);
                m[num].push(temp);
            }
        }
        return ans;
    }
};