class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> s;
        s.push(num[0]);
        for (int i = 1;i<num.size();i++)
        {
            while (k && s.size() && num[i] < s.top())
            {
                s.pop();
                k--;
            }
            s.push(num[i]);
        }
        while (k && s.size()) 
        {
            s.pop();
            k--;
        }
        string ans = "";
        while (s.size())
        {
            ans = ans.insert(0,1,s.top());
            s.pop();
        }
        while(ans[0] == '0') ans.erase(0,1);
        return ans.size() ? ans : "0";
    }
};