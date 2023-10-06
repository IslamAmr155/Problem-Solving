#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

int rec(long long h,vector<long long>& w,vector<pair<long long,long long>>& dp)
{
    if (dp[h].first != -1)
        return dp[h].first;
    long long newh = INT_MAX,a = 0,nh = INT_MAX,b=0;
    for (long long i=0;i<w.size();i++)
        if (h-w[i] >= 0) {
            a = (long long)1 + rec(h - w[i], w, dp);
            b = dp[h-w[i]].second;
            if (a != 0)
            {
                if (a <= newh && b <= nh) {
                    newh = a;
                    nh = b;
                }
            }
            if (b < nh)
            {
                newh = a;
                nh = b;
            }
        }
    dp[h].first = (newh != INT_MAX) ? newh : (long long)0;
    dp[h].second = (nh != INT_MAX) ? nh : h;
    return dp[h].first;
}

int main() {
    int n,m; long long ma = INT_MIN;
    cin >> n;
    vector<long long> h(n);
    for (int i=0;i<n;i++) {
        cin >> h[i];
        ma = max(ma,h[i]);
    }
    cin >> m;
    vector<long long> w(m);
    for (int i=0;i<m;i++)
        cin >> w[i];
    vector<pair<long long,long long>> dp(ma + 1, make_pair(-1,-1));
    dp[0].second = 0;
    dp[0].first = 0;
    for (int i=0;i<n;i++) {
        rec(h[i], w, dp);
        cout << dp[h[i]].second << " " << dp[h[i]].first << '\n';
    }
    return 0;
}
