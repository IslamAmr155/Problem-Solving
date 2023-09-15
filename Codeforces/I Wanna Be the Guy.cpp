#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n, p, sum = 0;
	cin >> n >> p;
	int* arr = new int[p];
	for (int i = 0; i < p; i++)
	{
		sum++;
		cin >> arr[i];
	}
	int q, a;
	bool isfound = false;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		isfound = false;
		cin >> a;
		for (int i = 0; i < p; i++)
		{
			if (a == arr[i])
			{
				isfound = true;
				break;
			}
		}
		if (!isfound)
			sum++;
	}
	if (sum == n)
		cout << "I become the guy.";
	else
		cout << "Oh, my keyboard!";
	return 0;
}