#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
	int n, num, pe = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num % 2 == 0)
			cout << num / 2 << endl;
		else
			if (!pe)
			{
				cout << ceil(num / 2.0) << endl;
				pe++;
			}
			else if (pe > 0)
			{
				cout << floor(num / 2.0) << endl;
				pe--;
			}
			else if (pe < 0)
			{
				cout << ceil(num / 2.0) << endl;
				pe++;
			}
	}
	return 0;
}