#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    string s;
    int k;
    cin >> s >> k;
    int len = s.size();
    int vlen = 0;
    string sub = s.substr(0, k);
    for (int i = 0; i < k; i++)
    {
        if (sub[i] == 'a' || sub[i] == 'e' || sub[i] == 'i' || sub[i] == 'o' || sub[i] == 'u')
            vlen++;
    }
    string result = sub;
    int maxv = vlen;
    for (int i = k; i < len; i++)
    {
        if (sub[0] == 'a' || sub[0] == 'e' || sub[0] == 'i' || sub[0] == 'o' || sub[0] == 'u')
            vlen--;
        sub = sub.substr(1, k);
        sub += s[i];
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            vlen++;
        if (vlen > maxv)
        {
            result = sub;
            maxv = vlen;
        }
    }
    if (maxv == 0)
        cout << "Not found!";
    else
        cout << result;
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