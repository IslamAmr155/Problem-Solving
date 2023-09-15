#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	int n, k, bad = 0;
	string number;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> number;
		for (int j = 0; j <= k; j++)
		{
			if (number.find('0' + j) == -1)
			{
				bad++;
				break;
			}
		}
	}
	cout << n-bad;
	return 0;
}