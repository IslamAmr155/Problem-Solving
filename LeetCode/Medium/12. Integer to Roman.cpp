class Solution {
public:
    string intToRoman(int num) {
        string s;
        int c = num /1000;
        map <int,string> m {{1,"I"},{2,"II"},{3,"III"},{4,"IV"},{5,"V"},{6,"VI"},{7,"VII"},
        {8,"VIII"},{9,"IX"}};
        if(c != 0)
        {
            for (int i=0;i<c;i++)
                s += "M";
        }
        num -= c*1000;
        c = num/100;
        if (c == 9)
            s += "CM";
        else if (c == 4)
            s += "CD";
        else if (c >= 5)
        {
            s += "D";
            for (int i=0;i<c-5;i++)
                s += "C";
        }
        else
            for (int i=0;i<c;i++)
                s += "C";
        num -= c*100;
        c = num/10;
        if (c == 9)
            s += "XC";
        else if (c == 4)
            s += "XL";
        else if (c >= 5)
        {
            s += "L";
            for (int i=0;i<c - 5;i++)
                s += "X";
        }
        else
            for (int i=0;i<c;i++)
                s += "X";
        num -= c*10;
        if (num == 0)
            return s;
        else
            return s += m[num];
    }
};