#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n, a, b;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a != b)
            sum++;
    }
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