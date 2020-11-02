#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int X=0,A=0;
	cin >> A>> X;
	int* arr = new int[A];
	
	for (int i = 0; i < A; i++)
		cin >> arr[i];

	for (int j = 0; j < A; j++) {
		if (X > arr[j])
			cout << arr[j] << " ";
	}


	
	return 0;
}