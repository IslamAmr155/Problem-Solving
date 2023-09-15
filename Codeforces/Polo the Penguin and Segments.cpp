#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n, k, sum=0, ch = 0;
	cin >> n >> k;
	int* arr = new int[2*n];
	for (int i = 0; i < 2*n; i++)
		cin >> arr[i];
		sum = 0;
		for (int i = 0; i < 2*n; i += 2)
			for (int j = arr[i]; j <= arr[i + 1]; j++)
				sum++;
		if (sum % k != 0)
		{
			int j = 2;
			while (k < sum)
			{
				k *= j;
				if (k > sum)
					break;
				else {
					k /= j;
					j++;
				}
			}
			ch = k - sum;
		}
	cout << ch;
	return 0;
}