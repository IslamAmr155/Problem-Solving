#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n),s(n);
    for (int i=0;i<n;i++)
    {
        cin >> v[i];
        s[i] = v[i];
    }
    sort(s.rbegin(),s.rend());
    int m = s[0];
    for (int i=0;i<n;i++)
    {
        if (v[i] == m)
            cout << v[i] - s[1] << ' ';
        else
            cout << v[i] - s[0] << ' ';
    }
    cout << '\n';
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