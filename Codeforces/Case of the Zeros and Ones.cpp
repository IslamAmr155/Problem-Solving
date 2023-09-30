#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int len=s.size();
    for (int i=0;i<len-1;i++)
    {
        if(s[i] != s[i+1])
        {
            s.erase(s.begin()+i);
            s.erase(s.begin()+i);
            len=s.size();
            i == 0 ? i = -1 : i -= 2;
        }
    }
    cout << s.size();
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
