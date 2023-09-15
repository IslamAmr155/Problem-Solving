#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int k;
    cin >> k;
    cout << k / 2 << endl;
    for (int i = 0; i < k / 2 - 1; i++)
        cout << 2 << " ";
    if (k % 2 == 0)
        cout << 2;
    else
        cout << 3;
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