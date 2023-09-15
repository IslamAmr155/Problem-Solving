#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n, c;
    bool flag = 1;
    cin >> n;
    int d[10];
    for (int i = n + 1; i <= 9021; i++)
    {
        int num = i;
        flag = 1;
        memset(d, 0, sizeof(int) * 10);
        for (int i = 0; i < 4; i++)
        {
            c = num % 10;
            num /= 10;
            if (d[c])
            {
                flag = 0;
                break;
            }
            else
                d[c]++;
        }
        if (flag) {
            cout << i;
            return;
        }
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