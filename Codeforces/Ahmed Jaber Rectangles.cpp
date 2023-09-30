#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	long long x1, x2, x3, x4, h;
	cin >> x1 >> x2 >> x3 >> x4 >> h;
	if (x3 > x2 || x1 > x4)
	{
		cout << 0;
		return 0;
	}
	long long ma = max(x1, x3);
	long long mi = min(x2, x4);
	long long area = (mi - ma) * h;
	cout << area;
	return 0;
}