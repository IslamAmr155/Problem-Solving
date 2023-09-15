#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<string, int> mp;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        mp[s];
        if (mp[s])
            cout << s << mp[s] << '\n';
        else
            cout << "OK" << '\n';
        mp[s]++;
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