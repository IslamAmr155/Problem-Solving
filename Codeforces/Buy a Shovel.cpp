#include <iostream>
#include <string>

using namespace std;

int main()
{
	int k, r;
	int shovels = 0;
	cin >> k >> r;
	int prod = 0;
	bool tmm = false;
	while (!tmm)
	{
		prod += k;
		shovels++;
		if (prod % 10 == 0 || (prod - r) % 10 == 0)
			break;
	}
	cout << shovels;
}