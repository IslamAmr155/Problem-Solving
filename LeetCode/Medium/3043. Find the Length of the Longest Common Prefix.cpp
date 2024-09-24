class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        set<int> s;
        for (int& x : arr1) 
            while (x) {
                s.insert(x);
                x /= 10;   
            }
        int ans = 0;
        for (int&x : arr2) 
            while (x) {
                if (s.find(x) != s.end()) ans = max(ans,(int)to_string(x).size());
                x /= 10;
            }
        return ans;
    }
};