#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	int n;
	int per = 1;
	cin >> n;
	int* give = new int[n];
	int* rec = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> give[i];
		rec[give[i] - 1] = per;
		per++;
	}
	for (int i = 0; i < n; i++)
		cout << rec[i] << " ";
	return 0;
}