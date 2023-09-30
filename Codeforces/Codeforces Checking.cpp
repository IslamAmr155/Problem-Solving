#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
void solve()
{
    char c;
    cin >> c;
    string a = "codeforces";
    if (a.find(c) == -1)
        cout << "no" << '\n';
    else
        cout << "yes" << '\n';
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