class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>v (26);
        int m = 0, c = 0;
        for (char t : tasks)
        {
            v[t - 'A']++;
            if (m == v[t - 'A']) c++;
            else if (m < v[t - 'A']) {
                m = v[t - 'A'];
                c = 1;
            }
        }
        int e = (m - 1) * (n - (c - 1)), a = tasks.size() - m * c;
        return tasks.size() + max(0, e - a);
    }
};