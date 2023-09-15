#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
	int n, a;
	cin >> n;
	int num[1000];
	for (int i = 0; i < 1000; i++)
		num[i] = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		num[a - 1]++;
	}
	int* ma = max_element(num, num + 1000);
	if (n % 2 == 0)
	{
		if (*ma > n / 2)
			cout << "NO";
		else
			cout << "YES";
	}
	else if (n % 2 != 0)
	{
		if (*ma > n / 2 + 1)
			cout << "NO";
		else
			cout << "YES";
	}
	return 0;
}