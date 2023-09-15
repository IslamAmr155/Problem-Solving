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
    int n, m;
    cin >> n >> m;
    if (n == 0)
    {
        cout << m;
        return;
    }
    ll rem = n / m;
    if (n % m != 0)
        cout << (rem + 1) * m - n;
    else
        cout << 0;
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