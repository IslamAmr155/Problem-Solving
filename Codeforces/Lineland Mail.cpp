#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
	int n, ci, mil, mir, mal,mar,ma, mi;
	cin >> n;
	int* c = new int[n];
	for (int i = 0; i < n; i++)
		cin >> c[i];
	for (int i = 0; i < n; i++)
	{
		mil = numeric_limits<int>::max();
		mir = numeric_limits<int>::max();
		ci = c[i];
		if (i != 0)
			mil = abs(ci - c[i - 1]);
		if (i != n - 1)
			mir = abs(ci - c[i + 1]);
		if (mil < mir)
			mi = mil;
		else
			mi = mir;
		mal = abs(c[0] - ci);
		mar = abs(c[n - 1]-ci);
		if (mal > mar)
			ma = mal;
		else
			ma = mar;
		cout << mi << " " << ma << endl;
	}
	return 0;
}