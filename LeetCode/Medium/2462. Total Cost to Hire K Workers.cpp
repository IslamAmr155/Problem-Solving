class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        int n = costs.size(), i = 0, j =  n - 1,hired = 0;
        priority_queue<int,vector<int>,greater<int>> p,q;
        long long cost = 0;
        while (i <= j && candidates--)
        {
            p.push(costs[i]);
            costs[i++] = INT_MAX;
            q.push(costs[j]);
            costs[j--] = INT_MAX;
        }
        int c1,c2;
        while (hired != k)
        {
            c1 = p.top();
            c2 = q.top();
            hired++;
            if (c1 <= c2)
            {
                p.pop();
                cost += c1;
                if (i < n)
                {
                    p.push(costs[i]);
                    costs[i++] = INT_MAX;
                }
            }
            else
            {
                q.pop();
                cost += c2;
                if (j >= 0)
                {
                    q.push(costs[j]);
                    costs[j--] = INT_MAX;
                }
            }
        }
        return cost;
    }
};