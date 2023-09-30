#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n, x=0,y=0;
    string s;
    cin >> n >>s;
    for (int i=0;i<n;i++)
    {
        if (s[i] == 'U')
            y++;
        else if (s[i] == 'D')
            y--;
        else if (s[i] == 'R')
            x++;
        else
            x--;
        if (x == 1 && y ==1) {
            cout << "yes" << '\n';
            return;
        }
    }
    cout << "no" << '\n';
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