#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    vector<int> v(4);
    for (int i=0;i<4;i++)
        cin >> v[i];
    auto ma = max_element(v.begin(),v.end());
    int dma = distance(v.begin(),ma);
    auto mi = min_element(v.begin(),v.end());
    int dmi = distance(v.begin(),mi);
    if (((dma == 1 || dmi == 1) && (dma == 2 || dmi == 2)) || ((dma == 0 || dmi == 0) && (dma == 3 || dmi == 3)))
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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