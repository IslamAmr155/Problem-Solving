#include <iostream>
#include <string>

using namespace std;

int main()
{
	int games, A = 0, D = 0;
	cin >> games;
	string names;
	cin >> names;
	for (int i =0; i < games; i++)
	{
		if (names[i] == 'A')
			A++;
		else
			D++;
	}
	if (A > D)
		cout << "Anton";
	else if (A < D)
		cout << "Danik";
	else
		cout << "Friendship";
}