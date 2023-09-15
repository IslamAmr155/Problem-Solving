#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string* l = new string[n];
	for (int i = 0; i < n; i++)
		cin >> l[i];
	bool x = true;
	char d=l[0][0], t=l[0][1];
	if (d == t)
	{
		cout << "NO";
		return 0;
	}
	int end = n - 1, middle = n / 2;
	for (int i = 0; i < n / 2; i++)
	{
		if (l[i] != l[end])
		{
			x = false;
			break;
		}
		end--;
	}
	for (int i = 0; i < n; i++)
	{
		if (i == middle)
			if (l[middle][middle] == d)
			continue;
		else
		{
			x = false;
			break;
		}
		if (l[middle][i] != t)
		{
			x = false;
			break;
		}
	}
	if (x)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}