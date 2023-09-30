#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n,f;
    ll sum =0,k,l;
    cin >> n >> f;
    vector<ll> m(n);
    for (int i=0;i<n;i++)
    {
        cin >> k >> l;
        sum += min (k,l);
        m[i] = min (k,max(l-k,0ll));
    }
    sort(m.rbegin(),m.rend());
    for (int i=0;i<f;i++)
        sum += m[i];
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
