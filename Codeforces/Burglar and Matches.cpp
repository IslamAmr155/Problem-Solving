#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
	int n, m, sum = 0, all = 0;
	cin >> n >> m;
	int* a = new int[m];
	int* b = new int[m];
	for (int i = 0; i < m; i++)
	{
		cin >> a[i];
		all += a[i];
		cin >> b[i];
	}
	while (n && all)
	{
		int* ma = max_element(b, b + m);
		int d = distance(b, ma);
		if (n - a[d] >= 0)
		{
			sum += *ma * a[d];
			n -= a[d];
			all -= a[d];
		}
		else
		{
			sum += *ma * n;
			all -= n;
			n = 0;
		}
		b[d] = 0;
	}
	cout << sum;
	return 0;
}