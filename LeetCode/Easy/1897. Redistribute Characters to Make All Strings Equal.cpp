class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int>v (26);
        for (string s : words)
            for (char c : s)
                v[c-'a']++;
        for (int x : v)
            if (x % words.size())
                return false;
        return true;
    }
};