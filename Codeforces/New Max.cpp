#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	int s = 0;
	bool ismax = false;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > m)
			s++;
		if (arr[i] == m)
			ismax = true;
	}
	if (!ismax && !s)
		s++;
	if (s > k)
		cout << "NO";
	else
		cout << "YES";
	return 0;
}