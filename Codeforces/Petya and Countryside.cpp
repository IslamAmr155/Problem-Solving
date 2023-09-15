#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
	int n, ma = numeric_limits<int>::min(), sum = 1, g;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 1)
		{
			sum = 1;
			g = arr[i];
				for (int j = i - 1; j >= 0; j--)
				{
					if (g >= arr[j])
					{
						sum++;
						g = arr[j];
					}
					else
						break;
				}
				g = arr[i];
				for (int j = i + 1; j < n; j++)
				{
					if (g >= arr[j])
					{
						sum++;
						g = arr[j];
					}
					else
						break;
				}
		}
		if (sum > ma)
			ma = sum;
	}
	cout << ma;
	return 0;
}