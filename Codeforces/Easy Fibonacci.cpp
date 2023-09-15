#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int sum = 1;
    int prev = 0;
    if (n == 1)
    {
        cout << 0;
        return;
    }
    cout << prev << " " << sum << " ";
    for (int i = 2; i < n; i++)
    {
        cout << sum + prev << " ";
        int temp = sum + prev;
        prev = sum;
        sum = temp;
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