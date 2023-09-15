#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	bool noswap = false;
	cin >> n;
	int* cubes = new int[n];
	for (int i = 0; i < n; i++)
		cin >> cubes[i];
	for (int i = 0; i < n; i++)
	{
		if (noswap)
			break;
		noswap = true;
		for (int j = n - 1; j > i; j--)
		{
			if (cubes[j] < cubes[j - 1])
			{
				noswap = false;
				int temp = cubes[j];
				cubes[j] = cubes[j - 1];
				cubes[j - 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << cubes[i] << " ";
}