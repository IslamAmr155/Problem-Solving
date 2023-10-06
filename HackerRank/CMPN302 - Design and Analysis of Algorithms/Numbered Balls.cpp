#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int v,b;
vector<int> balls;
vector<pair<int,int>> dp (10001,make_pair(-1,-1));

int rec(int value)
{
    if (dp[value].first != -1)
        return dp[value].first;
    int ball = INT_MAX,a = 0,nv = INT_MAX,c=0;
    for (int i=0;i<b;i++)
    {
        if (value - balls[i] >= 0)
        {
            a = 1 + rec(value-balls[i]);
            c = dp[value-balls[i]].second;
            if (a < ball)
            {
                ball = a;
                nv = c;
            }
            if (c < nv)
            {
                ball = a;
                nv = c;
            }
        }
    }
    dp[value].first = (ball != INT_MAX) ? ball :0;
    dp[value].second = (nv != INT_MAX) ? nv : value;
    return dp[value].first;
}

int main() {
    cin >> v >> b;
    balls.resize(b);
    for (int i=0;i<b;i++)
        cin >> balls[i];
    int a = rec(v);
    if (dp[v].second == 0)
        cout << dp[v].first;
    else
        cout << "no solution";
}
