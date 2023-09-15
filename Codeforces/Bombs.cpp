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

void explode(vector<vector<char>>& g,int i,int j,int r, int c)
{
    int si, ei, sj, ej;
    g[i][j] = 'x';
    if (i == 0)
        si = i;
    else
        si = i - 1;

    if (i == r - 1)
        ei = i;
    else
        ei = i + 1;

    if (j == 0)
        sj = j;
    else
        sj = j - 1;

    if (j == c - 1)
        ej = j;
    else
        ej = j + 1;

    for (int k = si; k <= ei; k++)
        for (int m = sj; m <= ej; m++)
            if (g[k][m] == 'o')
                explode(g, k, m, r, c);
            else
                g[k][m] = 'x';
}

void solve()
{
    int r, c;
    cin >> r >> c;
    char d;
    vector<vector<char>> g;
    for (int i = 0; i < r; i++)
    {
        vector<char> v;
        for (int j = 0; j < c; j++)
        {
            cin >> d;
            v.push_back(d);
        }
        g.push_back(v);
    }
    int si, ei, sj, ej;
    for (int i=0;i<r;i++)
        for (int j = 0; j < c; j++)
        {
            if (g[i][j] == 'o')
            {
                explode(g, i, j, r, c);
                /*if (i == 0)
                    si = i;
                else
                    si = i - 1;

                if (i == r - 1)
                    ei = i;
                else
                    ei = i + 1;

                if (j == 0)
                    sj = j;
                else
                    sj = j - 1;

                if (j == c - 1)
                    ej = j;
                else
                    ej = j + 1;

                for (int k = si; k <= ei; k++)
                    for (int m = sj; m <= ej; m++)
                        g[k][m] = 'x';*/
            }
        }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << g[i][j];
        cout << '\n';
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