#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>
#include <iomanip>

#define ll long long 

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	double a, b, c;
	cin >> a >> b >> c;
	double ma = a;
	if (b > ma)
		ma = b;
	if (c > ma)
		ma = c;
	double all = ma / a + ma / b + ma / c;
	cout << setprecision(13)  << ma / all;
	return 0;
}