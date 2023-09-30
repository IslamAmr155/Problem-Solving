#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n,len;
    cin >> n >> len;
    vector<int> v(n);
    for (int i=0;i<n;i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    double beg = v[0] - 0;
    double end = len - v[n-1];
    double m = max(beg,end);
    for (int i=0;i<n-1;i++)
        m = max(m,(v[i+1] - v[i])/2.0);
    cout << fixed << setprecision(10) << m;
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
