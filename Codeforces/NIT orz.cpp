#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	int t, n, z, max = 0, num, tand, tor, maxt;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		max = 0;
		cin >> n >> z;
		for (int i = 0; i < n; i++)
		{
			cin >> num;
			tand = num & z;
			tor = num | z;
			if (tand > tor)
				maxt = tand;
			else
				maxt = tor;
			if (maxt > max)
				max = maxt;
		}
		cout << max << endl;
	}
	return 0;
}