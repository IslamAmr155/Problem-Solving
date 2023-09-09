class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> r,d;
        for (int i=0;i<senate.size();i++)
            if (senate[i] == 'D')
                d.push(i);
            else
                r.push(i);
        int i = 0;
        while (!d.empty() && !r.empty())
        {
            if (d.front() >= i && (d.front() < r.front() || r.front() < i))
            {
                r.pop();
                i = d.front()+1;
                d.push(d.front());
                d.pop();
            }
            else
            {
                d.pop();
                i = r.front()+1;
                r.push(r.front());
                r.pop();
            }
            if (i > d.front() && i > r.front())
                i = 0;
        }
        return (d.empty() == true) ? "Radiant" : "Dire";
    }
};