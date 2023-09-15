#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n, m, s, e;
    cin >> n >> m;
    vector<bool> countries(2 * n + 1,0);
    for (int i = 0; i < m; i++)
    {
        cin >> s >> e;
        s += n; e += n;
        for (int j = s; j <= e; j++)
            countries[j] = 1;
    }
    int sum = 0;
    for (int i = 0; i < 2 * n + 1; i++)
    {
        if (!countries[i])
        {
            int j = i;
            for (j; j < 2 * n + 1; j++)
                if (countries[j])
                    break;
            sum++;
            i = j;
        }
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