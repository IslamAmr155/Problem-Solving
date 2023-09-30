#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

#define ll long long 

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, num, sum = 0, s = 1;
	cin >> n >> num;
	n--;
	if (num < 0)
		s = -1;
	for (int i=0;i<n;i++)
	{
		cin >> num;
		if (s * abs(num) == num)
			sum++;
		s *= -1;
	}
	n++;
	if (sum > n / 2)
		sum = n - sum;
	cout << sum;
	return 0;
}