#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <limits>
#include <map>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int len = s.size();
    vector<int> v;
    for (int i = 0; i < len; i++)
    {
        if (s[i] != '+')
            v.pb(s[i] - '0');
    }
    sort(v.begin(), v.end());
    int ilen = v.size() - 1;
    for (int i = 0; i < ilen; i++)
        cout << v[i] << "+";
    cout << v[ilen];
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