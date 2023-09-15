#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<int> v(26,0);
    int len = s.size();
    for (int i=0;i<len;i++)
    {
        if (!v[s[i] - 'a'])
        {
            v[s[i] - 'a'] = i + 1;
            cout << v[s[i] - 'a'] << '\n';
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