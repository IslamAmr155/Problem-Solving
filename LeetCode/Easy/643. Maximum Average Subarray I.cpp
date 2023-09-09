class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg = accumulate(nums.begin(),nums.begin()+k,0)/(double)k;
        double max_avg = avg;
        for (int i=k;i<nums.size();i++)
        {
            avg = avg + (nums[i] - nums[i-k])/(double)k;
            max_avg = max(max_avg,avg);
        }
        return max_avg;
    }
};