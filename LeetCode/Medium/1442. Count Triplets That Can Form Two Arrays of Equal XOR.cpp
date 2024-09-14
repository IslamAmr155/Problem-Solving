class Solution {
public:
    int countTriplets(vector<int>& arr) {
       int a, b, ans = 0, n = arr.size();
       for (int i = 0;i<n;i++) {
            a = arr[i];
            for (int j=i+1;j<n;j++) {
                ans += a == arr[j];
                b = arr[j];
                for (int k=j+1;k<n;k++) {
                    b ^= arr[k];
                    ans += a == b;
                }
                a ^= arr[j];
            }
       }
       return ans; 
    }
};