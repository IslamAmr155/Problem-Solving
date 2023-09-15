
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
#include<iomanip>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n, num;
    cin >> n;
    ll total = 0;
    ll sum = 0;
    for (int i = 1; i <= n; i++)
        total += i;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> num;
        sum += num;
    }
    cout << total - sum;
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