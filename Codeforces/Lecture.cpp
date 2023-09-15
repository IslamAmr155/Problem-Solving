#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string s1, s2;
    map<string, string> mp;
    for (int i = 0; i < m; i++)
    {
        cin >> s1 >> s2;
        int lens1 = s1.size();
        int lens2 = s2.size();
        if (lens1 <= lens2)
            mp[s1] = s1;
        else
            mp[s1] = s2;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> s1;
        cout << mp[s1] << " ";
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