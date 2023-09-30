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
    int n;
    cin >> n;
    char* r1 = new char[n];
    char* r2 = new char[n];
    char c;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (c == 'G')
            c = 'B';
        r1[i] = c;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (c == 'G')
            c = 'B';
        r2[i] = c;
    }
    for (int i = 0; i < n; i++)
    {
        if (r1[i] != r2[i]) {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}