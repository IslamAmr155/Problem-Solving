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
    int led[]{ 6,2,5,5,4,5,6,3,7,6 };
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int len = s.size();
        int sum = 0;
        for (int i = 0; i < len; i++)
            sum += led[s[i] - '0'];
        cout << sum << endl;
    }
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