#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    int s = n+1;
    double sq = sqrt(s);
    if (sq - (int)sq != 0) {
        cout << -1 << '\n';
        return;
    }
    cout << sq-1 << '\n';
    for (int i=1;i<sq;i++)
        cout << i << ' ';
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}