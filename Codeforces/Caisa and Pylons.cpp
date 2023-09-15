#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
	int n, money = 0, energy = 0;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	money += arr[0];
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i+1] > arr[i])
			if (arr[i + 1] - arr[i] > energy)
			{
				money += ((arr[i + 1] - arr[i]) - energy);
				energy = 0;
			}
			else
				energy -= (arr[i + 1] - arr[i]);
		else
			energy += (arr[i] - arr[i + 1]);
	}
	cout << money;
	return 0;
}