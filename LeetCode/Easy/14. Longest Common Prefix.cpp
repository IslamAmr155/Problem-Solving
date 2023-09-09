class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre = strs[0];
        int prelen = pre.size();
        int len = strs.size();
        for (int i=1;i<len;i++)
        {
            if (prelen == 0)
                return pre;
            int a = strs[i].size();
            if(a == 0)
                return "";
            for (int j=0;j<prelen && j<a;j++)
            {
                if(pre[j] != strs[i][j])
                {
                    pre = pre.substr(0,j);
                    prelen = pre.size();
                    break;
                }
                if(j < prelen && j == a-1)
                {
                    pre = strs[i];
                    prelen = a;
                }
            }
        }
        return pre;
    }
};