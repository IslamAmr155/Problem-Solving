#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
	int n, a, c = 0, k = 0, l, r;
	bool left = true ,right = true;
	cin >> n >> a;
	int s = a - 1;
	l = r = s;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	while (left || right)
	{
		if (left && right) {
			if (l == r && arr[l])
				c++;
			else if (arr[l] && arr[r])
				c += 2;
		}
		else if (left && !right) {
			if (arr[l])
				c++;
		}
		else if (right && !left)
			if (arr[r])
				c++;
		k++;
		l = s - k;
		if (l < 0)
			left = false;
		r = s + k;
		if (r > n - 1)
			right = false;
	}
	cout << c;
	return 0;
}