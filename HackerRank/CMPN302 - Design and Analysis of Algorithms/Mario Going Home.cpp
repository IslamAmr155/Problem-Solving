#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<vector<long long>> dp(1001,vector<long long>(1001,-1));

long long rec (int i,int j)
{
    if (i < 0 || j < 0)
        return 0;
    if (i == 0 && j == 0)
        return 1;
    if (dp[i][j] != -1)
        return dp[i][j];
    return dp[i][j] = rec(i-1,j) + rec(i,j-1);
}

int main() {
    long long x,y;
    cin >> x >> y;
    cout << rec(x,y);
    return 0;
}
