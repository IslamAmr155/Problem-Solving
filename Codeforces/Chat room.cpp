#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    string s;
    cin >> s;
    string hello= "hello";
    int len = s.size();
    int j = 0;
    bool flag = false;
    for (int i = 0; i < 5; i++)
    {
        for (j; j < len; j++)
        {
            if (hello[i] == s[j])
            {
                j++;
                if (hello[i] == 'o')
                    flag = true;
                break;
            }
        }
    }
    if (flag)
        cout << "YES";
    else
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