#include<iostream>
#include<vector>
#include<string>
using namespace std;

string arr[10001];

int main() {
	
	int A, B,count=0;
	while (true) {
		cin >> A >> B;
		if (A == 0 && B == 0) {
			break;
		}
		if (B % A == 0) {
			arr[count]="factor";
		}
		else if (A % B == 0) {
			arr[count] = "multiple";
		}
		else
			arr[count] = "neither";

		count++;
	}

	for (int i = 0; i < count ; i++) {
		cout << arr[i] + "\n";
	}
		
}