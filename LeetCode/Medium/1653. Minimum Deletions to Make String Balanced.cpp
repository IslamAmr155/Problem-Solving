class Solution {
public:
    int minimumDeletions(string s) {
        int a = 0, b = 0;
        for (int i = s.size() - 1;i>=0;i--) 
            if (s[i] == 'b') b++;
            else a = 1 + max(a,b);
        return s.size() - max(a,b);
    }
};