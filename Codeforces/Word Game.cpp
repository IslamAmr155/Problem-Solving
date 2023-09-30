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
    map<string, vector<int>> mp;
    string s;
    int player = 1;
    for (int i = 1; i <= n * 3; i++)
    {
        cin >> s;
        mp[s].push_back(player);
        if (i % n == 0)
            player++;
    }
    int players[3]{ 0,0,0 };
    for (auto& x : mp)
    {
        if (x.second.size() == 3)
            continue;
        else if (x.second.size() == 2)
        {
            for (int i = 0; i < 2; i++)
                players[x.second[i] - 1]++;
        }
        else
            players[x.second[0] - 1]+=3;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << players[i] << " ";
    }
    cout << '\n';
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