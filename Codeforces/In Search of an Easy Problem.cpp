#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n, s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == 1)
        {
            cout << "HARD";
            return;
        }
    }
    cout << "EASY";
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