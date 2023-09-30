#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>
 
#define ll long long 
 
using namespace std;
 
int main()
{
	int t, size, n;
	string m;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> m;
		size = m.size() - 1;
		n = pow(10, size);
		cout << stoi(m) - n << endl;
	}
	return 0;
}