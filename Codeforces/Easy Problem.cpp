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
    int a;
    cin >> a;
    if (a > 1)
        cout << 25;
    else if (a == 1)
        cout << 05;
    else if (a == 0)
        cout << 01;
    else if (a == -1)
        cout << 0.2;
    else if (a == -2)
        cout << "04";
    else if (a == -3)
        cout << "08";
    else
        cout << pow(2, -a);
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