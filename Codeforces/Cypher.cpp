#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

#define ll long long 

using namespace std;

int main()
{
	int t, n, num;
	string s;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int* arr = new int[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		for (int i = 0; i < n; i++)
		{
			cin >> num >> s;
			for (int j = 0; j < num; j++)
			{
				if (s[j] == 'D')
				{
					arr[i]++;
					if (arr[i] > 9)
						arr[i] = 0;
				}
				else
				{
					arr[i]--;
					if (arr[i] < 0)
						arr[i] = 9;
				}
			}
		}
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
	return 0;
}