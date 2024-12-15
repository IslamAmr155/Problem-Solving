class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double,int>> q;
        for (int i = 0;i<classes.size();i++) 
            q.push({((1.0*classes[i][0]+1)/(classes[i][1]+1)) - (1.0*classes[i][0]/classes[i][1]), i});
        while (extraStudents--) {
            pair<double, int> p = q.top();
            int i = p.second;
            q.pop();
            classes[i][0]++;
            classes[i][1]++;            
            q.push({((1.0*classes[i][0]+1)/(classes[i][1]+1)) - (1.0*classes[i][0]/classes[i][1]), i});
        }
        double ans = 0;
        for (int i = 0;i<classes.size();i++) ans += 1.0*classes[i][0]/classes[i][1];
        return ans / classes.size();
    }
};