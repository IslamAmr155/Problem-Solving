class Solution {
public:
    int nthUglyNumber(int n) {
        set<long long> s;
        priority_queue<long long, vector<long long>, greater<long long>> q;
        q.push(1);
        while (--n) {
            long long m = q.top();
            q.pop();
            if (s.find(m * 2) == s.end()) s.insert(m*2), q.push(m*2);
            if (s.find(m * 3) == s.end()) s.insert(m*3), q.push(m*3);
            if (s.find(m * 5) == s.end()) s.insert(m*5), q.push(m*5);
        }
        return q.top();
    }
};