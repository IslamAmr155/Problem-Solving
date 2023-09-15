#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n, a;
    vector<int> j;
    vector<int> t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        j.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        t.push_back(a);
    }
    sort(j.begin(), j.end(), greater<int>());
    sort(t.begin(), t.end());
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (j[i] - t[i] > 0)
            sum += (j[i] - t[i]);
        else
            break;
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