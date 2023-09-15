#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void rec(int size,vector<string>& v,string s)
{
    if (s.size() == size)
    {
        v.push_back(s);
        return;
    }
    rec(size, v, s += "4");
    s = s.substr(0, s.size() - 1);
    rec(size, v, s += "7");
}

void solve()
{
    int a, b;
    cin >> a >> b;
    string num = to_string(b);
    int size = num.size();
    vector<string> v;
    string s = "";
    for (int i = 1; i <= size; i++)
    {
        s = "";
        rec(i, v, s);
    }
    bool any = false;
    for (int i = a; i <= b; i++)
    {
        string s = to_string(i);
        if (find(v.begin(), v.end(), s) != v.end()) {
            cout << i << " ";
            any = true;
        }
    }
    if (!any)
        cout << -1;
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