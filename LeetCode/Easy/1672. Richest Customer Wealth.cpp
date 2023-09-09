class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        priority_queue<int> pq;
        int len = accounts.size();
        for (int i=0;i<len;i++)
            pq.push(accumulate(accounts[i].begin(),accounts[i].end(),0));
        return pq.top();
    }
};