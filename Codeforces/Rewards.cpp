#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

#define ll long long 

using namespace std;

int main()
{
	int cups = 0, medals = 0, n;
	for (int i = 0; i < 3; i++)
	{
		cin >> n;
		cups += n;
	}
	for (int i = 0; i < 3; i++)
	{
		cin >> n;
		medals += n;
	}
	cin >> n;
	if (cups % 5 != 0)
		cups = cups / 5 + 1;
	else
		cups = cups / 5;
	if (medals % 10 != 0)
		medals = medals / 10 + 1;
	else
		medals = medals / 10;
	if (n >= medals)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}