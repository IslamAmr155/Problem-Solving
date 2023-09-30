#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int x=0,y=0,z=0,n,f;
    cin >> n;
    while(n--)
    {
        cin >> f;
        x+=f;
        cin >> f;
        y+=f;
        cin >> f;
        z+=f;
    }
    if (x == 0 && y == 0 && z == 0)
        cout << "YES";
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