#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>
#include <map>
#include <vector>

#define ll long long 

using namespace std;

int main()
{
	ll t, a, b,k;
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> k;
		ll sum = 0;
		if (k % 2 == 1)
			sum += a * (k / 2 + 1);
		else
			sum += a * (k / 2);
		sum -= b * (k / 2);
		cout << sum << endl;
	}
	return 0;
}