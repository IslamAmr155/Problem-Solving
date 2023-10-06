#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool twentySeven(const vector<int>& nums,int sum,int i,bool& flag)
{
    if (i == 5)
    {
        if (sum == 27) {
            cout << "Possible";
            flag = 1;
            return 1;
        }
        else
            return 0;
    }
    else
    {
        if (twentySeven(nums, sum + nums[i], i + 1, flag))
            return 1;
        if (twentySeven(nums, sum - nums[i], i + 1, flag))
            return 1;
        if (twentySeven(nums, sum * nums[i], i + 1, flag))
            return 1;
    }
    return 0;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> nums(5);
    bool flag = 0;
    for (int i=0;i<5;i++)
        cin >> nums[i];
    sort (nums.begin(),nums.end());
    do
    {
        if(twentySeven(nums,nums[0],1,flag))
            break;
    }while(next_permutation(nums.begin(),nums.end()));
    if (!flag)
        cout << "Impossible";
    return 0;
}

