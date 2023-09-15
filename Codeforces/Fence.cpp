#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

#define ll long long 

using namespace std;

int main()
{
	int n, k, sum, mi = numeric_limits<int>::max(), ind, j;
	cin >> n >> k;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n - (k - 1); i++)
	{
		sum = 0;
		for (j = i; j < i + k; j++)
			sum += arr[j];
		if (sum < mi) {
			mi = sum;
			ind = j - (k - 1);
		}
	}
	cout << ind;
	return 0;
}