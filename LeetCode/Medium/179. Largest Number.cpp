class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> v;
        for (int x : nums) v.push_back(to_string(x));
        sort(v.begin(), v.end(), [](string& s1, string& s2){return s1+s2>s2+s1;});
        string ans = "";
        for (string s : v) ans += s;
        while (ans[0] == '0' && ans.size()>1) ans.erase(0,1);
        return ans;
    }
};