#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n;
    string s;
    vector<string> customers;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        customers.push_back(s);
    }
    map<string, int> mp;
    int len = customers.size();
    for (int i = 0; i < len; i++)
        mp[customers[i]]++;
    vector<string> good;
    double dlen = len;
    for (auto& s : mp)
    {
        if (s.second / dlen >= 0.05)
            good.push_back(s.first);
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