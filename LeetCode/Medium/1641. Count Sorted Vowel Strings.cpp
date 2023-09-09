class Solution {
public:
    vector<char> vowels{'a','e','i','o','u'};

    int rec(int i,vector<char> &cur,const int n)
    {
        if (cur.size() == n)
            return 1;
        int a = 0;
        for (int j=i;j<5;j++)
        {
            cur.push_back(vowels[j]);
            a += rec(j,cur,n);
            cur.pop_back();
        }
        return a;
    }

    int countVowelStrings(int n) {
        vector<char> cur;
        return rec(0,cur,n);
    }
};