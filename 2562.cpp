#include<iostream>
#include<algorithm>


using namespace std;

int main() {

	int min = 0, max = 0;
	int* arr = new int[9];

	for (int i = 0; i < 9; i++)
		cin >> arr[i];
	
	max = *max_element(arr, arr + 9);
	cout << max << "\n";
	for (int j = 0; j < 9; j++)
		if (max == arr[j])
			cout << j + 1<<"\n";
	return 0;
	
}