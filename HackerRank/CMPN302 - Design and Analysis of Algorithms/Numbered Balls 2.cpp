#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int v,b;
vector<int> balls;
vector<pair<int,int>> dp(10001, make_pair(INT_MAX,INT_MAX));

int rec(int i,int value)
{
    if (value <= 0)
        return 0;
    if (i == b)
        return 0;
    if (dp[value].first != INT_MAX)
        return dp[value].first;
    int a = rec(i+1,value),d = INT_MAX,e=1;
    int rem = value;
    while (rem - balls[i] >= 0)
    {
        rem -= balls[i];
        int c = e + rec(i+1,rem);
        e++;
        d = min(d,c);
    }
    if (rem <= dp[value].second)
    {
        dp[value].first = d;
        dp[value].second = rem;
    }
    return dp[value].first;
}

int main() {
     cin >> v >> b;
     balls.resize(b);
     for (int i=0;i<b;i++)
         cin >> balls[i];
     int c = rec(0,v);
     if (dp[v].second == 0)
         cout << dp[v].first;
     else
         cout << "no solution";
     return 0;
}
