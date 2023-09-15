
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
    double ac, cb;
    cin >> ac >> cb;
    double r = sqrt(pow(ac, 2) + pow(cb, 2)) / 2;
    double area = pow(r, 2) * 3.141592 / 2;
    printf("%.6f", area);
}

int main()
{
    //ios_base::sync_with_stdio(0);
    //cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}