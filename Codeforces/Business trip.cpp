#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int k, a;
    cin >> k;
    if (k == 0)
    {
        cout << 0;
        return;
    }
    vector<int> m;
    for (int i = 0; i < 12; i++)
    {
        cin >> a;
        m.push_back(a);
    }
    sort(m.begin(), m.end(), greater<int>());
    int sum = 0;
    int count = 0;
    for (int i = 0; i < 12; i++)
    {
        sum += m[i];
        count++;
        if (sum >= k) 
            break;
    }
    if (sum >= k)
        cout << count;
    else
        cout << -1;
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