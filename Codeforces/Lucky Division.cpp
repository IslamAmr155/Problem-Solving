#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int arr[]{4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n;
    cin >> n;
    for (auto i : arr)
    {
        if (n % i == 0)
        {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
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