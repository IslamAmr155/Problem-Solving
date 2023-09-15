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
    int n, m;
    cin >> n >> m;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];
    ll sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n ; j++)
        {
            /*if (i == j)
                continue;*/
            for (int k = j + 1; k < n ; k++) {
               /* if (k == j || k == i)
                    continue;*/
                if ((c[i] + c[j] + c[k]) % m == 0)
                    sum++;
            }
        }
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