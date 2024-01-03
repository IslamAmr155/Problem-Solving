class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0, prev = 0;
        for (string s : bank)
        {
            int x = 0;
            for (char c : s)
                x += c-'0';
            ans += prev*x;
            if (x) prev = x;
        }
        return ans;
    }
};