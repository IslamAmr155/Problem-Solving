#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    string s;
    cin >> s;

    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A' && s[i + 1] == 'B')
        {
            for (int j = i + 2; j < s.length(); j++)
            {
                if (s[j] == 'B' && s[j + 1] == 'A')
                {
                    cout << "YES";
                    return;
                }
            }
        }
        if (s[i] == 'B' && s[i + 1] == 'A')
        {
            for (int j = i + 2; j < s.length(); j++)
            {
                if (s[j] == 'A' && s[j + 1] == 'B')
                {
                    cout << "YES";
                    return;
                }
            }
        }
    }
    cout << "NO";
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



