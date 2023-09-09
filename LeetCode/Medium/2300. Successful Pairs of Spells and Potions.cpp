class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int s = spells.size(),p = potions.size();
        sort(potions.begin(),potions.end());
        vector<int> ans(s);
        long long rem = 1;
        int m;
        for (int i=0;i<s;i++)
        {
            rem = success / spells[i]; 
            if (success % spells[i] != 0)
                rem++;
            auto low = lower_bound(potions.begin(),potions.end(),rem);
            m = low - potions.begin();
            ans[i] = p - m;
        }
        return ans;
    }
};