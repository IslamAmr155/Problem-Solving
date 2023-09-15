#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n, p;
    cin >> n;
    vector<int> v(1000001);
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        if (v[p - 1] < 3)
        {
            v[p - 1]++;
            cout << i + 1 << '\n';
        }
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