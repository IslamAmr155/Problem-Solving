#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>
#include <iomanip>

#define ll long long 

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, cn = 0, num;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> num;
		arr[i] = abs(num);
		if (num < 0)
			cn++;
	}
	long long sum = 0;
	if (cn % 2 == 0)
		for (int i = 0; i < n; i++)
			sum += arr[i];
	else
	{
		sort(arr, arr + n);
		sum -= arr[0];
		for (int i = 1; i < n; i++)
			sum += arr[i];
	}
	cout << sum;
	return 0;
}