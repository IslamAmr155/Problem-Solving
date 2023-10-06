#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

long long rec(long long health,const vector<long long>& weapons,vector<pair<long long,long long>>& dp)
{
    if (dp[health].first != -1)
        return dp[health].first;
    long long shots = INT_MAX,a = 0,nh = INT_MAX,b=0;
    for (long long i=0;i<weapons.size();i++)
        if (weapons[i] != 0 && health-weapons[i] >= 0) {
            a = 1 + rec(health - weapons[i], weapons, dp);
            b = dp[health-weapons[i]].second;
            if (a != 0)
            {
                if (a <= shots && b <= nh) {
                    shots = a;
                    nh = b;
                }
            }
            if (b < nh)
            {
                shots = a;
                nh = b;
            }
        }
    dp[health].first = (shots != INT_MAX) ? shots :0;
    dp[health].second = (nh != INT_MAX) ? nh : health;
    return dp[health].first;
}

int main() {
    int n,m; long long ma = INT_MIN;
    cin >> n;
    vector<long long> health(n);
    for (int i=0;i<n;i++) {
        cin >> health[i];
        ma = max(ma,health[i]);
    }
    cin >> m;
    vector<long long> weapons(m);
    for (int i=0;i<m;i++)
        cin >> weapons[i];
    vector<pair<long long,long long>> dp(ma + 1, make_pair(-1,-1));
    dp[0].second = 0;
    dp[0].first = 0;
    for (int i=0;i<n;i++) {
        rec(health[i], weapons, dp);
        cout << dp[health[i]].second << " " << dp[health[i]].first << '\n';
    }
    return 0;
}

