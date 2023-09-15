#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, h, length, totalwidth = 0;
	cin >> n >> h;
	for (int i = 0; i < n; i++)
	{
		cin >> length;
		if (length > h)
			totalwidth += 2;
		else
			totalwidth++;
	}
	cout << totalwidth;
}