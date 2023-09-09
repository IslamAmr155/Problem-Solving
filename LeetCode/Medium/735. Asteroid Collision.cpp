class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        int n = asteroids.size(),a;
        for (int i = 0;i<n;i++)
        {
            a = asteroids[i];
            if (a > 0 && !s.empty())
                s.push(a);
            else if (a < 0 && !s.empty())
            {
                while (!s.empty() && s.top() > 0)
                {
                    if (abs(a) > s.top())
                        s.pop();
                    else
                        break;
                }
                if (!s.empty())
                {
                    if(s.top() < 0)
                        s.push(a);
                    else if (abs(a) == s.top())
                        s.pop();
                }
                else
                    s.push(a);
            }
            else
                s.push(a);
        }
        vector<int> ans(s.size());
        for (int i = s.size()-1;i>=0;i--)
        {
            ans[i] = s.top();
            s.pop();
        }
        return ans;
    }
};