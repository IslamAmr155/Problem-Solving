#include <iostream>
#include <string>

using namespace std;

int main()
{
	string first, second;
	int final = 0;
	cin >> first >> second;
	
	for (int i = 0; i < first.size(); i++)
	{
		if (tolower(first[i]) > tolower(second[i]))
		{
			final = 1;
			break;
		}
		else if (tolower(first[i]) < tolower(second[i]))
		{
			final = -1;
			break;
		}
		else
			continue;
	}
	cout << final;
}