#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int b,t,n;
vector<vector<int>> items;
vector<vector<int>> dp(21,vector<int>(201,-1));

int rec(int i,int c)
{
    if(dp[i][c] != -1)
        return dp[i][c];
    if (i == t)
        return 0;
    int ma = INT_MIN,total = 0;
    for (int j=0;j<items[i].size();j++)
    {
        if (c+items[i][j] <= b)
        {
            total = rec(i + 1, c + items[i][j]);
            if (total >= 0)
                ma = max(ma,items[i][j] + total);
        }
    }
    if (ma <= 0)
        dp[i][c] = -2;
    else
        dp[i][c] = ma;
    return dp[i][c];
}

int main() {
    cin >> b >> t;
    items.resize(t);
    for (int i=0;i<t;i++)
    {
        cin >> n;
        items[i].resize(n);
        for (int j=0;j<n;j++)
            cin >> items[i][j];
    }
    int ans = rec(0,0);
    if(ans == -2)
        cout << "no solution";
    else
        cout << ans;
    return 0;
}
