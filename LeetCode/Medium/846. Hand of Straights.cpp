class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if (hand.size() % groupSize) return false;
        map<int,int> m;
        for (int x : hand) m[x]++;
        for (auto i = m.begin();i != m.end();i++) 
            if (i->second > 0)
                for (int j = 1;j<groupSize;j++)
                    if ((m[i->first + j] -= i->second) < 0) return false;
        return true;
    }
};