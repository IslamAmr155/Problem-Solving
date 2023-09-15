#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    if (n > m && n - m > 1)
    {
        cout << "NO";
        return;
    }
    string s, t;
    cin >> s >> t;
    int i = 0;
    while ((i < n) && (i < m) && s[i] != '*')
    {
        if (s[i] != t[i])
        {
            cout << "NO";
            return;
        }
        i++;
    }
    if (i == n || (i == m && s[i] != '*') && n - m != 0)
    {
        cout << "NO";
        return;
    }
    int dif = abs(n - m);
    i++;
    int j = 0;
    //if (dif != 1)
        j = i + dif;
   /* else
        j = i - 1;*/
    while ((i < n) && (j < m))
    {
        if (s[i] != t[j])
        {
            cout << "NO";
            return;
        }
        i++;
        j++;
    }
   /* if (i != n && j != m)
    {
        cout << "NO";
        return;
    }*/
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