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
    int n, a;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] <= v[i + 1])
        {
            v[i + 1] -= v[i];
            v[i] = 0;
        }
        else
        {
            cout << "NO";
            return;
        }
    }
    if (v[n - 1])
        cout << "NO";
    else
        cout << "YES";
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