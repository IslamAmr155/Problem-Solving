class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
        int movement = (numRows - 1)*2;
        int i = 0;
        int j = movement;
        int n = s.size();
        string str = "";
        for (int k = 0;k<n;k+=movement)
            str = str + s[k];
        i++;
        j--;
        while (i < j)
        {
            int k = i;
            int m = j;
            for (;k<n && m<n;k+=movement, m+= movement)
            {
                str = str + s[k];
                str = str + s[m];
            }
            if (k < n)
                str = str + s[k];
            if (m < n)
                str = str + s[m];
            i++;
            j--;
        }
        for (;i<n;i+=movement)
            str = str + s[i];
        return str;
    }
};