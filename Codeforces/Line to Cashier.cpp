#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

#define ll long long 

using namespace std;

int main()
{
	int n, num;
	cin >> n;
	int* arr = new int[n];
	int* c = new int[n];
	for (int i = 0; i < n; i++)
		cin >> c[i];
	for (int i = 0; i < n; i++)
	{
		arr[i] = 0;
		for (int j = 0; j < c[i]; j++)
		{
			cin >> num;
			arr[i] += num;
		}
		arr[i] *= 5;
		arr[i] += (c[i] * 15);
	}
	int* mi = min_element(arr, arr + n);
	cout << *mi;
	return 0;
}