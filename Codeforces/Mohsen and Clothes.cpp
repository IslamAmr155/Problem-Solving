#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n, a, q, m, b;
    vector<int> c(1000005);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        c[a]++;
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> m;
        int min = INT_MAX;
        for (int j = 0; j < m; j++)
        {
            cin >> b;
            if (c[b] < min)
                min = c[b];
        }
        cout << min << " " << '\n';
    }
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