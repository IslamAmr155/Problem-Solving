class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int c = 0;
        for (int x : arr) {
            if (x % 2) {
                if (++c == 3) return true;
            } 
            else c = 0;
        }
        return false;
    }
};