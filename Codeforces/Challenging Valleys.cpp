#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    int l = -1,r = -1,c=0;
    bool f=0;
    for (int i=0;i<n;i++)
    {
        if (i == 0 || v[i] < v[i-1])
            if (!f)
        {
            l = i;
            r = i;
            c++;
            int j = i;
            while (j < n)
            {
                if (r == n-1)
                {
                    break;
                }
                else if(v[j] == v[j+1])
                {
                    j++;
                    r++;
                }
                else if (v[j] < v[j+1])
                {
                    r++;
                    f = 1;
                    break;
                }
                else if (v[l-1] > v[j])
                {
                    c=0;
                    l = -1;
                    r = -1;
                    f = 0;
                    i=j;
                    break;
                }
                else
                {
                    break;
                }
            }
        }
        else if (f)
        {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
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