#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

#define ll long long 

using namespace std;

int main()
{
	int n, m, l, r, t;
	cin >> n;
	int* v = new int[n];
	int* sv = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		sv[i] = v[i];
	}
	sort(sv, sv + n);
	cin >> m;
	while (m--)
	{
		cin >> t >> l >> r;
		ll sum = 0;
		if (t == 1)
			for (int i = l - 1; i < r; i++)
				sum += v[i];
		else
			for (int i = l - 1; i < r; i++)
				sum += sv[i];
		cout << sum << endl;
	}
	return 0;
}