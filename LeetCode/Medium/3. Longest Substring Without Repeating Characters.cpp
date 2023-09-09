class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=s.size(),m=0,i=0,ind,strlen;
        string str = "";
        while(i < len)
        {
            ind = str.find(s[i],0);
            if (ind != string::npos)
            {
                strlen = str.size();
                if(strlen > m)
                    m = strlen;
                str = str.substr(ind + 1,strlen - ind);
            }
            str += s[i];
            i++;
        }
        strlen = str.size();
        if(strlen > m)
            m = strlen;
        return m;
    }
};