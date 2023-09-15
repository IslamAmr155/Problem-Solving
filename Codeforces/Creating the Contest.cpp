#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    ll n, num;
    cin >> n;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    ll max = 1;
    ll sum = 1;
    for (ll i = 0; i < n - 1; i++)
    {
        if (v[i + 1] <= v[i] * 2)
            sum++;
        else
        {
            if (sum > max)
                max = sum;            
            sum = 1;
        }
    }
    if (sum > max)
        max = sum;
    cout << max;
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