#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
	int n, m, p;
	cin >> n >> m;
	bool isprime = true;
	for (int i = n + 1; i <= m; i++)
	{	
		isprime = true;
		p = i;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				isprime = false;
				break;
			}
		}
		if (isprime)
			break;
	}
	if (p == m && isprime)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}