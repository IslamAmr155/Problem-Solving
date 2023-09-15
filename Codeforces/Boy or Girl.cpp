#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	bool isfound = false;
	int letters = 0;
	cin >> name;
	for (int i = 0; i < name.size(); i++)
	{
		isfound = false;
		for (int j = i + 1; j < name.size(); j++)
		{
			if (name[i] == name[j]) {
				isfound = true;
				break;
			}
		}
		if (!isfound)
			letters++;
	}
	if (letters % 2 == 0)
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";
}