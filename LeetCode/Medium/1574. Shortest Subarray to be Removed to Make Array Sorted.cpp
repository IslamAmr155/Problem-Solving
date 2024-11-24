class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int left = 0, n = arr.size();
        while (left < n-1 && arr[left] <= arr[left+1]) left++;
        if (left == n-1) return 0;
        int ans = n - left - 1;
        for (int r = n - 1;r >= 0 && (r == n - 1 || arr[r] <= arr[r+1]);r--) {
            while (left >= 0 && arr[r] < arr[left]) left--;
            ans = min(ans, r - left - 1);
        }
        return ans;
    }
};