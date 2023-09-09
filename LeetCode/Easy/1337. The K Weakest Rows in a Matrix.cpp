class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int r = mat.size();
        priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for (int i=0;i<r;i++)
            pq.push(make_pair(accumulate(mat[i].begin(),mat[i].end(),0),i));
        vector<int> v(k);
        for (int i=0;i<k;i++)
        {
            v[i] = pq.top().second;
            pq.pop();
        }
        return v;
    }
};