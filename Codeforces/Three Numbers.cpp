#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int k, s;
    cin >> k >> s;
    ll sum = 0;
    for (int i = 0; i <= k; i++)
        for (int j = 0; j <= k; j++)
            if (s - i - j >= 0 && s - i - j <= k)
                sum++;
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