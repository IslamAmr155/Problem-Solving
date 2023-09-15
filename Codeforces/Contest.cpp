#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n, m, a;
    vector<int> p;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        p.push_back(a);
    }
    sort(p.begin(), p.end());
    ll sum = 0;
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + p[i] <= m)
        {
            sum += p[i];
            count++;
        }
        else
            break;
    }
    cout << count;
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