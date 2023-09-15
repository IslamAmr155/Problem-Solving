#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n, a;
    set<int> s;
    cin >> n;
    bool zero = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 0)
            zero = 1;
        s.insert(a);
    }
    if ((s.size() == 1 && a == 0) || s.size() == 0)
        cout << 0;
    else if (zero)
        cout << (s.size() - 1) * 30;
    else
        cout << s.size() * 30;
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