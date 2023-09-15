#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int k2, k3, k5, k6;
    ll sum = 0;
    cin >> k2 >> k3 >> k5 >> k6;
    int smaller = k2;
    if (k5 < smaller)
        smaller = k5;
    if (k6 < smaller)
        smaller = k6;
    sum += (256 * smaller);
    k2 -= smaller;
    smaller = k2;
    if (k3 < smaller)
        smaller = k3;
    sum += (32 * smaller);
    cout << sum;
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