#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v (n);
    for (int i=0;i<n;i++)
        cin >> v[i];
    int i = 0;
    if (v[i] < v[i+1])
        while (i < n - 1 && v[i] < v[i+1])
            i++;
    if (i == n - 1)
    {
        cout << "yes" << '\n' << 1 << " " << 1;
        return;
    }
    int k = i,j = i;
    while (k < n - 1 && v[k] > v[k+1])
        k++;
    partial_sort (v.begin()+i,v.begin()+k,v.end());
    int a = k;
    while (a < n - 1 && v[a] < v[a+1])
        a++;
    if (a == n - 1 && is_sorted(v.begin(),v.end()))
        cout << "yes" << '\n' << ++j << " " << ++k;
    else
        cout << "no";
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