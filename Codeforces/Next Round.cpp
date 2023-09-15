#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int* cont = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> cont[i];
	}
	int per = cont[k - 1];
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		if (cont[i] > 0 && cont[i] >= per)
			total++;
	}
	cout << total;
	return 0;
}