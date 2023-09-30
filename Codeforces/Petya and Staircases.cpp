#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

#define ll long long 

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int* arr = new int[m];
	for (int i = 0; i < m; i++)
		cin >> arr[i];
	sort(arr,arr + n);
	if (arr[0] == 1 || arr[m - 1] == n)
	{
		cout << "NO";
		return 0;
	}
	for (int i = 0; i < m - 2; i++)
	{
		if (arr[i] == arr[i + 1] - 1 && arr[i + 1] == arr[i + 2] - 1)
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}