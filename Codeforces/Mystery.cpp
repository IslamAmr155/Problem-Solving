#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <limits>
#include <map>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    ll n, m, first, second;
    cin >> n >> m >> first >> second;
    ll x, y;
    for (ll i = 1; i < n; i++)
    {
        cin >> x >> y;
        if (x > first)
            first = x;
        if (y < second)
            second = y;
    }
    if (second - first + 1 > 0)
        cout << second - first + 1;
    else
        cout << 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}