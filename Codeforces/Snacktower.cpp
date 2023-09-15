#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n, fall, size = 0, *found;
	cin >> n;
	int snack = n, j = 0, f;
	int* s = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> fall;
		if (fall == snack)
		{
			cout << snack << " ";
			snack--;
			for (int j = 0; j < size; j++)
			{
				if (snack == 0)
					break;
				found = find(s, s + size, snack);
				if (*found == snack) {
					cout << snack << " ";
					snack--;
				}
				else
					break;
			}
		}
		else
		{
			s[j] = fall;
			j++;
			size++;
		}
		cout << endl;
	}
	return 0;
}