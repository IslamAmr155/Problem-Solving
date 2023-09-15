#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n, x, opt1, opt2;
	cin >> n >> x;
	int dice1b = x;
	int* arr = new int[6];
	for (int i = 0; i < 6; i++)
		arr[i] = n;
	int* dice = new int[2 * n];
	for (int i = 0; i < (2 * n); i++)
		cin >> dice[i];
	int j = 0;
	int value = n;
	int options = 0;
	for (int i = 0; i < n; i++)
	{
		options = 0;
		arr[dice1b - 1]--;
		arr[dice[j] - 1]--;
		arr[7 - dice[j] - 1]--;
		arr[dice[j + 1] - 1]--;
		arr[7 - dice[j + 1] - 1]--;
		j += 2;
		value--;
		for (int k = 0; k < 6;k++)
		{
			if (arr[k] != value)
			{
				dice1b = 7-(k+1);
				arr[k]--;
				options++;
			}
		}
		if (options > 1)
			break;
	}
	if (options > 1)
		cout << "NO";
	else
		cout << "YES";
	return 0;
}