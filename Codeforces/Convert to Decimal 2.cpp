#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        if (n % 2 != 0)
            count++;
        n /= 2;
    }
    int prod = 0;
    for (int i = 0; i < count; i++)
        prod += pow(2, i);
    cout << prod << endl;
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