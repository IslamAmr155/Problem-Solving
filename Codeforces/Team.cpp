#include <iostream>

using namespace std;

int main()
{
	int numofp, solved = 0, sure, numofsure = 0;
	cin >> numofp;
	for (int i = 0; i < numofp; i++)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> sure;
			numofsure += sure;
		}
		if (numofsure >= 2)
			solved++;
		numofsure = 0;
	}
	cout << solved;
}