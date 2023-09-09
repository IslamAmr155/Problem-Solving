class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n=word1.size(), m=word2.size();
        if (n != m)
            return false;
        vector<int> a(26),b(26);
        for (int i=0;i<n;i++)
        {
            a[word1[i]-'a']++;
            b[word2[i]-'a']++;
        }
        map<int,int> m1,m2;
        for (int i=0;i<26;i++)
        {
            if ((a[i] && !b[i]) || (!a[i] && b[i]))
                return false;
            m1[a[i]]++;
            m2[b[i]]++;
        }
        if (m1.size() != m2.size())
            return false;
        for (auto i = m1.begin(), j = m2.begin(); i != m1.end() ; ++i, ++j) 
        {
            if ((i->first != j->first) || (i->second != j->second))
                return false;
        }
        return true;
    }
};