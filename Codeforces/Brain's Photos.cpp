#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	char p;
	bool flag = true;
	for (int i = 0; i < n * m; i++)
	{
		cin >> p;
		if (p == 'C' || p == 'M' || p == 'Y')
		{
			flag = false;
			break;
		}
	}
	if (flag)
		cout << "#Black&White";
	else
		cout << "#Color";
	return 0;
}