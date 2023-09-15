#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	long long n, k;
	cin >> n >> k;
	long long half;
	if (n % 2 == 0)
		half = n / 2;
	else
		half = n / 2 + 1;
	if (k > half)
	{
		k -= half;
		cout << k * 2;
	}
	else
	{
		cout << k * 2 - 1;
	}
	return 0;
}