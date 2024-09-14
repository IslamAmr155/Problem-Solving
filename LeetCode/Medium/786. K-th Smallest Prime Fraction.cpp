class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<float,vector<int>>> q;
        for (int i = 0;i<arr.size();i++)
            for (int j = i+1;j<arr.size();j++) {
                q.push({1.0*arr[i]/arr[j],{arr[i],arr[j]}});
                if (q.size() > k) q.pop();
            }
        return q.top().second;
    }
};