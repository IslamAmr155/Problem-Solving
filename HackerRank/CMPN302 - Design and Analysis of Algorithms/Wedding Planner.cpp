#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int b,t,n;
vector<vector<int>> items;
vector<vector<int>> dp(21,vector<int>(201,-1));

int rec(int i,int c)
{
    if (i == t)
        return 0;
    if (dp[i][c] != -1)
        return dp[i][c];
    int a = 0, d = INT_MIN;
    for (int j=0;j<items[i].size();j++)
    {
        if (c - items[i][j] >= 0)
        {
            a = rec(i + 1,c - items[i][j]);
            if (a != -2)
                d = max(d,items[i][j] + a);
        }
    }
    if (d == INT_MIN)
        return dp[i][c] = -2;
    else
        return dp[i][c] = d;
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
    int a = rec(0,b);
    if (a == -2)
        cout << "no solution";
    else
        cout << a;
    return 0;
}
