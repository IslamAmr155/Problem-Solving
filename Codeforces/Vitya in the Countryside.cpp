#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n, num;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    if (v.size() == 1 && num != 0 && num != 15)
    {
        cout << -1;
        return;
    }
    if (!v[n - 1])
        cout << "UP";
    else if (v[n - 1] == 15)
        cout << "DOWN";
    else if (v[n - 2] < v[n - 1] && v[n - 1] != 15)
        cout << "UP";
    else
        cout << "DOWN";
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