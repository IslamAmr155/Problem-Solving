class Solution {
public:
    int maxVowels(string s, int k) {
        int c = 0;
        vector<char> v {'a','e','i','o','u'};
        for (int i=0;i<k;i++)
            if (find(v.begin(),v.end(),s[i]) != v.end())
                c++;
        int ma = c;
        for (int i=k;i<s.size();i++)
        {
            if (find(v.begin(),v.end(),s[i]) != v.end())
                c++;
            if (find(v.begin(),v.end(),s[i-k]) != v.end())
                c--;
            ma = max(ma,c);
        }
        return ma;
    }
};