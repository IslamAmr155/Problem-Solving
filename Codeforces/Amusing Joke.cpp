#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int glen = s1.size() + s2.size();
    int plen = s3.size();
    if (glen != plen)
    {
        cout << "NO";
        return;
    }
    int g[26], p[26];
    memset(g, 0, sizeof(int) * 26);
    memset(p, 0, sizeof(int) * 26);
    int s1len = s1.size();
    int s2len = s2.size();
    for (int i = 0; i < s1len; i++)
        g[s1[i] - 'A']++;
    for (int i = 0; i < s2len; i++)
        g[s2[i] - 'A']++;
    for (int i = 0; i < plen; i++)
        p[s3[i] - 'A']++;
    for (int i = 0; i < 26; i++)
    {
        if (g[i] != p[i])
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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