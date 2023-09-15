#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
	int n, sum = 0;
	cin >> n;
	int* s = new int[n];
	for (int i = 0; i < n; i++)
		cin >> s[i];
	if (n <= 2)
	{
		cout << 0;
		return 0;
	}
	int* mi = min_element(s, s + n);
	int* ma = max_element(s, s + n);
	for (int i = 0; i < n; i++)
		if (s[i] != *mi && s[i] != *ma)
			sum++;
	cout << sum;
	return 0;
}