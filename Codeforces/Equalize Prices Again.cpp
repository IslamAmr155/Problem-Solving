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
	int q, n, sum, c;
	cin >> q;
	while (q--)
	{
		cin >> n;
		sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> c;
			sum += c;
		}
		if (sum % n != 0)
			sum = sum / n + 1;
		else
			sum /= n;
		cout << sum << endl;
	}
	return 0;
}