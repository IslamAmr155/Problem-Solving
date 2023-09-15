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
    int n, m, a;
    cin >> n >> m;
    vector<int> ave;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        ave.pb(a);
    }
    sort(ave.begin(), ave.end(), greater<int>());
    ll sum = 0;
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ave[i];
        count++;
        if (sum > m) {
            cout << count;
            return;
        }
    }
    cout << -1;
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