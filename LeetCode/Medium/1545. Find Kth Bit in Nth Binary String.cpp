class Solution {
public:
    char findKthBit(int n, int k) {
        string s = "0";
        for (int i = 2;i<=n && s.size() < k;i++) {
            string temp = "";
            for (int j = s.size() - 1;j>=0;j--) temp += s[j] == '1' ? '0' : '1';
            s += "1" + temp;
        }
        return s[k-1];
    }
};