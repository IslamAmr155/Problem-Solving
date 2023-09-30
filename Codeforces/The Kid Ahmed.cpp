#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, x;
	cin >> n;
	int* arr = new int[n];
	int counter = 0;
	int j = 0;
	int count = 0;
	int i = 0;
	bool isfirst = true;
	do {
		cin >> x;
		if (x == 1) {
			count++;
			if (!isfirst) {
				arr[j] = counter;
				j++;
				counter = 0;
			}
			counter++;
			isfirst = false;
		}
		else {
			counter++;
		}
		i++;
	} while (i < n);
	arr[j] = counter;
	j++;
	cout << count << endl;
	for (int m = 0; m < j; m++) 
		cout << arr[m] << " ";
	return 0;
}