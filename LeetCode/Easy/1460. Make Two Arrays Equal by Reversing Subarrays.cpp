class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int> m;
        for (int x : target) m[x]++;
        for (int x : arr) 
            if (--m[x] < 0) return false;
        return true;
    }
};