class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for (int s : students) q.push(s);
        int n, j = 0;
        while (n != q.size())
        {
            n = q.size();
            for (int i = 0;i<n;i++)
            {
                if (q.front() == sandwiches[j]) j++;
                else q.push(q.front());
                q.pop();
            }
        }
        return q.size();
    }
};