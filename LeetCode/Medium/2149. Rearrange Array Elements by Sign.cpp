class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int> p,n;
        vector<int> ans;
        for (int x : nums)
            if (x >= 0) p.push(x);
            else n.push(x);
        while (!p.empty())
        {
            ans.push_back(p.front());
            ans.push_back(n.front());
            p.pop();
            n.pop();
        }
        return ans;
    }
};