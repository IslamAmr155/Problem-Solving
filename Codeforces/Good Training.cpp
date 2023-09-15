#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    string s;
    cin >> s;
    cout << s << ':' << '\n';
    int len = s.size();
    if (len <= 2 && stoi(s) <= 20)
        cout << "I will help you.";
    else
        cout << "Think again!";
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