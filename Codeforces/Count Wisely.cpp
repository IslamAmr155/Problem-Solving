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
    ll a, b;
    cin >> a >> b;
    ll min, max;
    if (a > b)
    {
        min = b;
        max = a;
    }
    else
    {
        min = a;
        max = b;
    }
    ll sum = 0;
    for (int i = min; i <= max; i++)
        if (i % 2 == 0)
            sum += i;
    cout << sum;
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