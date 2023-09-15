#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, officers = 0, crimes = 0, input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input > 0)
			officers += input;
		else if (input == -1 && officers)
			officers--;
		else
			crimes++;
	}
	cout << crimes;
}