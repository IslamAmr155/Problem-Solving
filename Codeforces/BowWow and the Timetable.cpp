#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;
//1111010010000101100100001110011101111
int main()
{
	long long  p = 1, time = 0;
	string s;
	cin >> s;
	for (int i = s.size() - 1; i >= 0; i--)
	{
		if (s[i] == '1')
			time += p;
		p *= 2;
	}
	double hm = log10(time) / log10(4);
	if (hm - (int)hm == 0)
		cout << hm;
	else
		cout << ceil(hm);
	return 0;
}