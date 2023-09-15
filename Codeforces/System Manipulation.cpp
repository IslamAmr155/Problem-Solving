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
    ll n, m, g;
    cin >> n >> m;
    vector<ll> v;
    ll mygrade;
    cin >> mygrade;
    for (ll i = 1; i < n; i++)
    {
        cin >> g;
        v.push_back(g);
    }
    sort(v.begin(), v.end(), greater<ll>());
    for (ll i = 0; i < n - 1; i++)
    {
        mygrade += v[i];
        if (mygrade > m)
        {
            cout << m;
            return;
        }
    }
    cout << mygrade;
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