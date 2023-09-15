#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

#define ll long long 

using namespace std;

int main()
{
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	int arr[3]{ 0, 0, 0 };
	if (s1[1] == '>')
		arr[s1[0] - 'A']++;
	else
		arr[s1[2] - 'A']++;
	if (s2[1] == '>')
		arr[s2[0] - 'A']++;
	else
		arr[s2[2] - 'A']++;
	if (s3[1] == '>')
		arr[s3[0] - 'A']++;
	else
		arr[s3[2] - 'A']++;
	int* ma = max_element(arr, arr + 3);
	if (*ma != 2)
		cout << "Impossible";
	else
	{
		int i1 = distance(arr, ma);
		int i2 = distance(arr, find(arr, arr + 3, 1));
		int i3 = 3 - i1 - i2;
		char l = i1 + 'A';
		char m = i2 + 'A';
		char s = i3 + 'A';
		cout << s << m << l;
	}
	return 0;
}