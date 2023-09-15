#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n, m, s, e;
    cin >> n >> m;
    vector<bool> swi(n);
    for (int i = 0; i < m; i++)
    {
        cin >> s >> e;
        s--; e--;
        for (int j = s; j <= e; j++)
            swi[j] = swi[j] ^ 1;
    }
    for (int i = 0; i < n; i++)
        if (swi[i])
            cout << "ON" << '\n';
        else
            cout << "OFF" << '\n';
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