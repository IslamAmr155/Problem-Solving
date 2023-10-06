#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<vector<long long>> museum(2);
vector<vector<long long>> dp(2);

long long rec(int i,int j)
{
    if (j == museum[0].size())
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    else
    {
        long long a = 0,b = 0;
        if (i == 0)
        {
            b += rec (0,j+1);
            a += museum[i][j] + rec(1,j+1);
        }
        else
        {
            b += rec (1,j+1);
            a += museum[i][j] + rec(0,j+1);
        }
        dp[i][j] = max (a,b);
    }
    return dp[i][j];
}

int main() {
    int n;
    cin >> n;
    museum[0].resize(n);
    museum[1].resize(n);
    for (int i=0;i<2;i++)
        for (int j=0;j<n;j++)
            cin >> museum[i][j];
    dp[0].resize(n,0);
    dp[1].resize(n,0);

    dp[0][n-1] = museum[0][n-1];
    dp[1][n-1] = museum[1][n-1];
    dp[0][0] = museum[0][0];
    dp[1][0] = museum[1][0];
    for (int j=n-2;j>=1;j--)
    {
        if (museum[0][j] + dp[1][j+1] > museum[0][j-1] + dp[1][j+1])
            dp[0][j] = museum[0][j] + dp[1][j+1];
        else
            dp[0][j] = museum[0][j-1] + dp[1][j+1];
        if (museum[1][j] + dp[0][j+1] > museum[1][j-1] + dp[0][j+1])
            dp[1][j] = museum[1][j] + dp[0][j+1];
        else
            dp[1][j] = museum[1][j-1] + dp[0][j+1];
    }
    dp[0][0] += dp[1][1];
    dp[1][0] += dp[0][1];
    cout << max(dp[0][0],dp[1][0]);
    return 0;
}
