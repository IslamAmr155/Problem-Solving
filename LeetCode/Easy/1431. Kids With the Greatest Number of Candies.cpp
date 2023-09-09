class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candies = *max_element(candies.begin(),candies.end());
        vector<bool> ans(candies.size());
        for (int i=0;i<candies.size();i++)
            ans[i] = candies[i]+extraCandies >= max_candies;
        return ans;
    }
};