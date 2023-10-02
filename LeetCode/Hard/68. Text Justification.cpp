class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ans;
        int i = 0, n = words.size(), width = 0;
        string s = "";
        vector<string> v;
        while (i < n)
        {
            while (i < n && width + words[i].size() <= maxWidth)
            {
                v.push_back(words[i]);
                width += words[i].size() + 1;
                i++;
            }
            width -= v.size();
            int dif = maxWidth - width, space = 0, rem = 0;
            if (v.size() > 1)
            {
                space = dif / (v.size()-1);
                rem = dif % (v.size()-1);
            }
            else if (v.size() == 1)
                space = dif;
            string spaces = "";
            for (int i=0;i<space;i++)
                spaces += " ";
            if (i == n)
            {
                for (int j=0;j<v.size();j++)
                {
                    s += v[j];
                    if (j != v.size() - 1)
                        s += " ";
                }
                for (int j=s.size();j<maxWidth;j++)
                    s += " ";
            }
            else
                for (int j=0;j<v.size();j++)
                {
                    s += v[j];
                    if (j != v.size() - 1 || v.size() == 1)
                        s += spaces;
                    if (rem)
                    {
                        s += " ";
                        rem--;
                    }
                }
            ans.push_back(s);
            width = 0;
            s = "";
            v.clear();
        }
        return ans;
    }
};