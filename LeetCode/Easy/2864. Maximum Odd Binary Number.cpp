class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int z = 0, x = 0;
        for (char c : s) 
            if (c == '1') x++;
            else z++;
        string ans = "";
        for (int i = 0;i<x-1;i++) ans += '1';
        for (int i = 0;i<z;i++) ans += '0';
        return ans + '1';
    }
};