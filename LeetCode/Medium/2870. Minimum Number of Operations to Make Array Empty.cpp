class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> m;
        for (int x : nums)
            m[x]++;
        int op = 0;
        for (auto &n : m)
        {
            if (n.second == 1)
                return -1;
            if (n.second % 3 != 1)
            {
                op += n.second/3;
                n.second %= 3;
                op += n.second/2;
            }
            else
            {
                op += (n.second-4)/3;
                op += 2;
            }
        }
        return op;
    }
};