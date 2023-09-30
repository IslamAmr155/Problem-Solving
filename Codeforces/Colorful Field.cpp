#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n,m,k,t,c,a,b;
    cin >> n >> m >> k >> t;
    vector<pair<int,int>> v;
    for (int i=0;i<k;i++)
    {
        cin >> a >> b;
        v.emplace_back(make_pair(a-1,b-1));
    }
    sort(v.begin(),v.end());
    for (int i=0;i<t;i++)
    {
        cin >> a >> b;
        if(find(v.begin(),v.end(), make_pair(a-1,b-1)) != v.end())
        {
            cout << "Waste" << '\n';
            continue;
        }
        c = (a-1)*m + b - 1;
        auto l = lower_bound(v.begin(),v.end(), make_pair(a-1,b-1));
        c -= (l - v.begin());
        if (c % 3 == 0)
            cout << "Carrots" << '\n';
        else if (c % 3 == 1)
            cout << "Kiwis" << '\n';
        else
            cout << "Grapes" << '\n';
    }
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

