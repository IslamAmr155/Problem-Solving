class Solution {
public:
    string simplifyPath(string path) {
        int n = path.size(), i = n - 1, skip = 0;
        while (i >= 0 && path[i] == '/')
            i--;
        string ans = "";
        while (i >= 0)
        {   
            if (path[i] == '/')
            {
                while (i >= 0 && path[i] == '/')
                    i--;
                if (ans.size() > 0 && ans[0] != '/')
                    ans = '/' + ans;
            }
            else
            {
                string s = "";
                while (i >= 0 && path[i] != '/')
                {
                    s = path[i] + s;
                    i--;
                }
                if (s == "..")
                    skip++;
                else if (s == ".")
                    continue;
                else if (!skip)
                    ans = s + ans;
                else
                    skip--;
            }
        }
        return ans.size() != 0 ? ans : "/";
    }
};