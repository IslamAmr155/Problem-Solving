#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void zeroSumCells(const vector<int>& nums,vector<int>& curr,int& maxcells, long long sum,int cells,int i)
{
    if (i == nums.size())
    {
        if (sum == 0 && cells > maxcells)
            maxcells = cells;
    }
    else
    {
        zeroSumCells(nums, curr, maxcells, sum, cells, i + 1);
        if (find(curr.begin(), curr.end(), nums[i]) == curr.end()) {
            curr.push_back(nums[i]);
            zeroSumCells(nums, curr, maxcells, sum + nums[i], cells + 1, i + 1);
            curr.pop_back();
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m,maxcells = 0;
    cin >> n >> m;
    vector<int> nums (n*m);
    vector<int> curr;
    for (int i=0;i<n*m;i++)
        cin >> nums[i];
    zeroSumCells(nums,curr,maxcells,0,0,0);
    cout << maxcells;
    return 0;
}

