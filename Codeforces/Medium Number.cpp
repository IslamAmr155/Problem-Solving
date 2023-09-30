#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
void solve()
{
    vector<int> v(3);
    for (int i=0;i<3;i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    cout << v[1] << '\n';
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