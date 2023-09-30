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
    string s;
    cin >> n >> s;
    int arr[5]{ 0,0,0,0,0 };
    bool f = true;
    if (n != 5)
    {
        cout << "NO" << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'T' && !arr[0])
            arr[0]++;
        else if (s[i] == 'i' && !arr[1])
            arr[1]++;
        else if (s[i] == 'm' && !arr[2])
            arr[2]++;
        else  if (s[i] == 'u' && !arr[3])
            arr[3]++;
        else  if (s[i] == 'r' && !arr[4])
            arr[4]++;
        else
            f = false;
    }
    if (f)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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