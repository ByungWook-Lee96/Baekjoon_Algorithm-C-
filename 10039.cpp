#include<iostream>
using namespace std;

int main() {

	int sum = 0;
	int *arr = new int[5];
	
	for (int i = 0; i < 5; i++)
		cin >> arr[i];

	for (int j = 0; j < 5; j++) {
		if (arr[j] < 40)
			arr[j] = 40;
		sum += arr[j];

	}
	cout << sum / 5;
	return 0;
}