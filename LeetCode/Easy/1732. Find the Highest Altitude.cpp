class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int s = 0;
        int ma = s;
        for (int i=0;i<gain.size();i++)
        {
            s += gain[i];
            ma = max(ma,s);
        }
        return ma;
    }
};