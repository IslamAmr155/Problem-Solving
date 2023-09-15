#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void solve()
{
    int n, num;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    int vasya = 0, petya = 0;
    if (n >= 4) {
        int j = 1;
        for (int i = 0; i < n / 2; i++)
        {
            if (j == 1)
            {
                vasya += v[i];
                vasya += v[n - 1 - i];
                j *= -1;
            }
            else
            {
                petya += v[i];
                petya += v[n - 1 - i];
                j *= -1;
            }
        }
        int mid = v[n / 2];
        if (n % 2 != 0)
        {
            int vas = vasya + mid - petya;
            int pet = petya + mid - vasya;
            if (abs(vas) < abs(pet))
                vasya += mid;
            else
                petya += mid;
        }
        cout << abs(petya - vasya);
    }
    else if (n == 3)
    {
        petya = v[0];
        vasya = v[2];
        int mid = v[n / 2];
        if (n % 2 != 0)
        {
            int vas = vasya + mid - petya;
            int pet = petya + mid - vasya;
            if (abs(vas) < abs(pet))
                vasya += mid;
            else
                petya += mid;
        }
        cout << abs(petya - vasya);
    }
    else if (n == 2)
    {
        cout << v[1] - v[0];
    }
    else if (n == 1)
        cout << 360;
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