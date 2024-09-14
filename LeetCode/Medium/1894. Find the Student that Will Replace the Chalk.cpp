class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum = accumulate(chalk.begin(),chalk.end(), 0ll), i = 0;
        k %= sum;
        while (k - chalk[i] >= 0) k -= chalk[i++];
        return i;
    }
};