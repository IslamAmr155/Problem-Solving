#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int len = n/2;
    for (int i=0;i<len;i++)
    {
        if (s[i] == s[n-i-1])
        {
            cout << n - 2*i << '\n';
            return;
        }
    }
    cout << n % 2 << '\n';
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
