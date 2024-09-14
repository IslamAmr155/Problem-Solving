class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
        for (int i = 0;i<n;i++) q.push({score[i],i});
        vector<string> ans(n);
        while (q.size()) {
            switch(q.size()) {
                case 1:
                    ans[q.top().second] = "Gold Medal";
                    break;
                case 2:
                    ans[q.top().second] = "Silver Medal";
                    break;
                case 3:
                    ans[q.top().second] = "Bronze Medal";
                    break;
                default:
                    ans[q.top().second] = to_string(n--);
            }
            q.pop();
        }
        return ans;
    }
};