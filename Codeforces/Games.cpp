#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, num = 0;
	cin >> n;
	int* home = new int[n];
	int* away = new int[n];
	for (int i = 0; i < n; i++)
		cin >> home[i] >> away[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			if (home[i] == away[j])
				num++;
	}
	cout << num;
}