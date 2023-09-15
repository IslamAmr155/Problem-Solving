#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n, k, p;
    cin >> n >> k;
    int t = 0;
    vector<int> s;
    vector<int> team;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        if (find(s.begin(), s.end(), p) == s.end())
        {
            s.push_back(p);
            team.push_back(i + 1);
            t++;
        }
        if (t == k)
            break;
    }
    if (t == k)
    {
        cout << "YES" << '\n';
        for (int i = 0; i < t; i++)
            cout << team[i] << " ";
    }
    else
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