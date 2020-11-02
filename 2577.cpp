#include<iostream>

using namespace std;

int main() {
	int A = 0, B = 0, C = 0;
	int count = 0;
	int mul=0;
	int arr[10] = { 0, };
	int fin[10] = { 0, };
	cin >> A >> B >> C;

	mul = A * B * C;
	

	for (int i = 0; i < 10; i++) {
		arr[i] = mul % 10;
		mul = mul / 10;
		count++;
		if (mul < 1)
			break;
	}
	
	for (int j = 0; j < count; j++) {
		for (int k = 0; k < 10; k++) {
			if (arr[j] == k)
				fin[k] += 1;

		}
	}
	for (int l = 0; l < 10; l++)
		cout << fin[l] << endl;

		
	return 0;

}