#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int nop = 2 * n + 1;
	int* peaks = new int[nop];
	for (int i = 0; i < nop; i++)
		cin >> peaks[i];
	int chan = 0;
		for (int i = 1; i < nop; i+=2)
		{
			if (peaks[i] != 0 && peaks[i] - 1 != peaks[i - 1] && peaks[i] - 1 != peaks[i + 1])
			{
				peaks[i]--;
				chan++;
			}
			if (chan == k)
				break;
		}
		for (int i = 0; i < nop; i++)
			cout << peaks[i] << " ";
	return 0;
}