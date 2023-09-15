#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;
	int* be = new int[n];
	int* af = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> be[i] >> af[i];
		if (be[i] != af[i])
		{
			cout << "rated";
			return 0;
		}
	}
	for (int i = 1; i < n; i++)
	{
		if (be[i] > be[i - 1]) {
			cout << "unrated";
			return 0;
		}
	}
	cout << "maybe";
	return 0;
}