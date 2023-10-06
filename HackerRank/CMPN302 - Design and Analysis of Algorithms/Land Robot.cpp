#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int n,m;
vector<vector<long long>> grid;
vector<vector<long long>> dp(1001,vector<long long>(1001,-1));

long long rec(int i,int j)
{
    if (i == n || j == m)
        return INT_MIN;
    if (i == n-1 && j == m-1)
        return grid[i][j];
    if (dp[i][j] != -1)
        return dp[i][j];
    long long a = 0,b = 0,c  = 0;
    c = rec(i+1,j+1);
    a = rec(i+1,j);
    b = rec(i,j+1);


    dp[i][j] = grid[i][j] + max(a,max(b,c));
    return dp[i][j];
}

int main() {
    cin >> n >> m;
    grid.resize(n);
    for (int i=0;i<n;i++)
    {
        grid[i].resize(m);
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    cout << rec(0,0);
    return 0;
}
