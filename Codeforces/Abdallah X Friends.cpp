#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, m, sum = 0, prev;
	cin >> n >> m;
	int i = 1;
	while (sum < m)
	{
		prev = sum;
		sum += i;
		i++;
		if (i == n + 1)
			i = 1;
	}
	if (sum > m)
		cout << m - prev;
	else
		cout << "0";
	return 0;
}