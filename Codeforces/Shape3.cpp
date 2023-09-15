#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << ' ';
        for (int j = 0;j < 2*(i) + 1; j++)
            cout << '*';
        cout << '\n';
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << ' ';
        for (int j = 0; j < 2 * (i)+1; j++)
            cout << '*';
        cout << '\n';
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