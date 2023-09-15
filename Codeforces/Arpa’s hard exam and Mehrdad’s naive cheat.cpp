#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n == 0)
	{
		cout << 1;
		return 0;
	}
	int p =n % 4;
	if (p == 0)
		p = 4;
	cout << (int)pow(8, p) % 10;
	return 0;
}