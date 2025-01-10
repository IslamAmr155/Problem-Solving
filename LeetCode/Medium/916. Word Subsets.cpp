class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        vector<int> n(26);
        for (string& w : words2) {
            vector<int> temp(26);
            for (char c : w) temp[c-'a']++;
            for (int i = 0;i<26;i++) n[i] = max(n[i], temp[i]); 
        }
        for (string & w : words1) {
            vector<int> m(26);
            for (char c : w) m[c-'a']++;
            bool add = true;
            for (int i = 0;i<26;i++) 
                if (m[i] < n[i]) {
                    add = false;
                    break;
                }
            if (add) ans.push_back(w);
        }
        return ans;
    }
};