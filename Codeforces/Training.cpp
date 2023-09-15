#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n, a;
    cin >> n;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a % 2 == 0)
        {
            cout << "YES";
            return;
        }
        else
            odd++;
    }
    if (odd % 2 == 0)
        cout << "YES";
    else
        cout << "NO";
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