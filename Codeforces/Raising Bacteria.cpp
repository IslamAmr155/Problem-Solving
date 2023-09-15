#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;
//536870911 29
int main()
{
	long long x;
	cin >> x;
		int b = 0;
		while (x != 0)
			if (x % 2 == 0)
				x /= 2;
			else
			{
				x--;
				b++;
			}
		cout << b;
	return 0;
}