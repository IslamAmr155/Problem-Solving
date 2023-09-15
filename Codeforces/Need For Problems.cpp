#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    ll n, m, a, you = 0, samy = 0;
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        you += a;
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> a;
        samy += a;
    }
    if (samy >= you)
        cout << samy - you + 1;
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