#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;
//39916800 134217728 40320
//990 3,328 3294720 990
int main()
{
	long long n, m, a;
	cin >> n >> m >> a;
	long long l = n / a;
	long long w = m / a;
	long long sum;
	if (1 == 0)
		sum = w;
	else if (w == 0)
		sum = l;
	else
		sum = l * w;
	long long lr = n % a;
	long long wr = m % a;
	if (lr != 0 && l != 0)
		sum += w;
	if (wr != 0 && w != 0)
		sum += l;
	if (lr != 0 && wr != 0)
		sum += 1;
	cout << sum;
	return 0;
}