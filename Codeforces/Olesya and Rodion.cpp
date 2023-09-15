#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
	 long long n, t, first, end;
	cin >> n >> t;
	if (n == 1 && t == 10)
	{
		cout << -1;
		return 0;
	}
	if (t == 10)
	{
		cout << t;
		for (int i = 0; i < n - 2; i++)
			cout << 0;
		return 0;
	}
	cout << t;
	for (int i = 0; i < n - 1; i++)
		cout << 0;
	/*if (n == 1)
	{
		first = 1;
		end = 9;
	}
	else
	{
		first = pow(10,n-1);
		end = pow(10,n)-1;
	}
	for (first; first < end; first++)
	{
		if (first % t == 0)
		{
			cout << first;
			return 0;
		}
	}*/
	cout << -1;
	return 0;
}