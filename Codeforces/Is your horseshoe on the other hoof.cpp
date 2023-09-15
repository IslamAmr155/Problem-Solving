#include <iostream>
#include <string>

using namespace std;

int main()
{
	int col[4];
	int num = 0;
	for (int i = 0; i < 4; i++)
		cin >> col[i];
	for (int i = 0; i < 4; i++) {
		if (col[i] == 0)
			continue;
		for (int j = i + 1; j < 4; j++)
		{
			if (col[i] == col[j]) {
				num++;
				col[j] = 0;
			}
		}
	}
	cout << num;
}