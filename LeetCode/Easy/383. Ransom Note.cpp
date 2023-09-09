class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> r(26),m (26);
        int rlen = ransomNote.size(), mlen = magazine.size();
        for (int i=0;i<rlen;i++)
            r[ransomNote[i] - 'a']++;
        for (int i=0;i<mlen;i++)
            m[magazine[i] - 'a']++;
        for (int i=0;i<26;i++)
            if(r[i] > m[i])
                return false;
        return true;
    }
};