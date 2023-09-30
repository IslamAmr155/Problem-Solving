#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

#define ll long long 

using namespace std;

int main()
{
	int n, num;
	cin >> n;
	int c25 = 0, c50 = 0;
	bool no = false;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		switch (num)
		{
		case (25):
			c25++;
			break;
		case(50):
			if (c25 > 0) {
				c25--;
				c50++;
			}
			else
				no = true;
			break;
		case(100):
			if (c25 > 0 && c50 > 0)
			{
				c25--;
				c50--;
			}
			else if (c25 > 2)
				c25 -= 3;
			else
				no = true;
			break;
		}
	}
	if (no)
		cout << "NO";
	else
		cout << "YES";
	return 0;
}