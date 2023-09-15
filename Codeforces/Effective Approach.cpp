#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

#define ll long long 

using namespace std;

int main()
{
	ll n, m, v = 0, p = 0, c = 0, num;
	cin >> n;
	int a[100005];
	for (int i = 0; i < n; i++) {
		cin >> num;
		a[num] = i;
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> num;
		v += (a[num] + 1);
		p += (n - a[num]);
	}
	cout << v << " " << p;
	return 0;
}