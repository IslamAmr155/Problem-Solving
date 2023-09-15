#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, ser = 0, dim = 0;
	cin >> n;
	int num = n;
	if (num % 2 != 0)
		num++;
	int start = 0;
	int* cards = new int[n];
	for (int i = 0; i < n; i++)
		cin >> cards[i];
	for (int i = 0; i < num/2; i++)
	{
		if (cards[start] > cards[n - 1]) {
			ser += cards[start];
			start++;
		}
		else {
			ser += cards[n - 1];
			n--;
		} 
		if (start == n)
			break;
		if (cards[start] > cards[n - 1]) {
			dim += cards[start];
			start++;
		}
		else {
			dim += cards[n - 1];
			n--;
		}
	}
	cout << ser << " " << dim;
}