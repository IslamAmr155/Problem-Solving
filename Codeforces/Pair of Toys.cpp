#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll end;
    if (n >= k) {
        if (k % 2 != 0)
            cout << k / 2;
        else
            cout << k / 2 - 1;
    }
    else if (k > n && n > k / 2)
        cout << n - k / 2;
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