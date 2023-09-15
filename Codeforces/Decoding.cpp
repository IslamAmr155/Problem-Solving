#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

#define ll long long 

using namespace std;

int main()
{
	int n, it = 1;
	string s;
	cin >> n >> s;
	char* ans = new char[n];
	if (n % 2 == 1)
	{
		int mid = ceil(n / 2);
		ans[mid] = s[0];
		for (int i = 1; i < n ; i+=2)
		{
			ans[mid - it] = s[i];
			ans[mid + it] = s[i + 1];
			it++;
		}
	}
	else
	{
		int mid = n / 2 - 1;
		ans[mid] = s[0];
		for (int i = 1; i < n - 1; i += 2)
		{
			ans[mid + it] = s[i];
			ans[mid - it] = s[i + 1];
			it++;
		}
		ans[mid + it] = s[n - 1];
	}
	for (int i = 0; i < n; i++)
		cout << ans[i];
	return 0;
}