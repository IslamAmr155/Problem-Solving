class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        vector<char> v {'a','e','i','o','u'};
        int i = 0,j = n - 1;
        do
        {
            while (i < n && find(v.begin(),v.end(),tolower(s[i])) == v.end())
                i++;
            while (j >= 0 && find(v.begin(),v.end(),tolower(s[j])) == v.end())
                j--;
            if (i >= j)
                break;
            swap(s[i],s[j]);
            i++;
            j--;
        }while(i < j);
        return s;
    }
};