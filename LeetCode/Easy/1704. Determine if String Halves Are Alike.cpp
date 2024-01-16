class Solution {
public:
    bool halvesAreAlike(string s) {
        int i = 0, j = s.size() - 1, c1 = 0, c2 = 0;
        vector<char> v = {'a','e','o','i','u','A','E','O','I','U'};
        while (i < j)
        {
            if (find(v.begin(), v.end(), s[i]) != v.end())
                c1++;
            if (find(v.begin(), v.end(), s[j]) != v.end())
                c2++;
            i++;
            j--;
        }
        return c1 == c2;
    }
};