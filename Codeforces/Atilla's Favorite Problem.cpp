#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
void solve()
{
    int n;
    char a,b='a';
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> a;
        if (a > b)
            b = a;
    }
    cout << b - 96 << '\n';
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