#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>
#include <map>
#include <vector>

#define ll long long 

using namespace std;

int main()
{
	int n, m, mi = numeric_limits<int>::max();
	cin >> n >> m;
	int* arr = new int[m];
	for (int i = 0; i < m; i++)
		cin >> arr[i];
	sort(arr, arr + m);
	for (int i = 0; i < m - (n-1); i++)
		if (arr[i + (n-1)] - arr[i] < mi)
			mi = arr[i + (n-1)] - arr[i];
	cout << mi;
	ceil(2.5);
	return 0;
}