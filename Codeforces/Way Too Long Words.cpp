#include <iostream>
#include <string>

using namespace std;

int main()
{
	int numofwords;
	string word, newword;
	cin >> numofwords;
	for (int i = 0; i < numofwords; i++)
	{
		cin >> word;
		if (word.size() > 10)
			newword = word[0] + to_string(word.length() - 2) + word[word.length() - 1];
		else
			newword = word;
		cout << newword << endl;
		newword = " ";
	}
}