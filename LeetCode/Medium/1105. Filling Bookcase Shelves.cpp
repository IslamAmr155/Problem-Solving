class Solution {
public:
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        vector<int> dp(books.size() + 1, INT_MAX);
        dp[0] = 0;
        for (int i = 1;i<=books.size();i++) {
            int w = 0, h = 0;
            for (int j = i; j > 0 && w + books[j - 1][0]<= shelfWidth;j--) {
                w += books[j-1][0];
                h = max(h,books[j-1][1]);
                dp[i] = min(dp[i], dp[j-1] + h);
            }
        }
        return dp[books.size()];
    }
};