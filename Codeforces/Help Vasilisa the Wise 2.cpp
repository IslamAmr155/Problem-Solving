#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
	int r1, r2, c1, c2, d1, d2;
	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
	if (r1 == 1 || r2 == 1 || c1 == 1 || c2 == 1 || d1 == 1 || d2 == 1)
	{
		cout << -1;
		return 0;
	}
	int a1 = (c1 - d2 + r1) / 2;
	if (a1 < 1 || a1 > 9)
	{
		cout << -1;
		return 0;
	}
	int b1 = r1 - a1;
	if (b1 < 1 || b1 > 9)
	{
		cout << -1;
		return 0;
	}
	int a2 = (r2 - c2 + d2) / 2;
	if (a2 < 1 || a2 > 9)
	{
		cout << -1;
		return 0;
	}
	int b2 = c2 - d2 + a2;
	if (b2 < 1 || b2 > 9)
	{
		cout << -1;
		return 0;
	}
	if (a1 == b1 || a1 == a2 || a1 == b2 || b1 == a2 || b1 == b2 || a2 == b2)
		cout << -1;
	else if (a1 + b1 == r1 && a2 + b2 == r2 && a1 + a2 == c1 && b1 + b2 == c2 && a1 + b2 == d1 && b1 + a2 == d2)
		cout << a1 << " " << b1 << endl << a2 << " " << b2;
	else
		cout << -1;
	return 0;
}