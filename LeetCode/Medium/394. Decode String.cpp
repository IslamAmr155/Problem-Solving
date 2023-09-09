class Solution {
public:
    string dup(int& i,string& s,string temp,string prev)
    {
        char c;
        int n = s.size();
        string num = "";
        for (;i<n;i++)
        {
            c = s[i];
            if (c >= 97 && c <= 122)
                temp += c;
            else if (c >= 48 && c <= 57)
                num += c;
            else if (c == '[')
            {
                string ss ="";
                ss = dup(++i,s,"",num);
                num = "";
                temp += ss;
            }
            else
            {
                if (prev != "")
                {
                    int x = stoi(prev);
                    string one = temp;
                    for (int i=0;i<x-1;i++)
                        temp = one + temp;
                }
                return temp;
            }
        }
        return temp;
    }

    string decodeString(string s) {
        int i = 0;
        return dup(i,s,"","");
    }
};