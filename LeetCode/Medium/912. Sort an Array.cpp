class Solution {
public:
    void mergeSort(vector<int>& nums,int s, int e) {
        if (s >= e) return;
        int m = s + (e-s) / 2;
        mergeSort(nums,s,m);
        mergeSort(nums,m+1,e);
        int l = m - s + 1, r = e - m;
        vector<int> left(l), right(r);
        for (int i = 0;i<l;i++) left[i] = nums[i + s];
        for (int i = 0;i<r;i++) right[i] = nums[i + m + 1];
        int i = 0, j =0;
        for (;i < l && j < r;s++) {
            if (left[i] <= right[j]) nums[s] = left[i++];
            else nums[s] = right[j++];
        }
        while (i < l) nums[s++] = left[i++];
        while (j < r) nums[s++] = right[j++];
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};