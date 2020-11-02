#include<iostream>

using namespace std;

int main() {

	int N,min=0;
	cin >> N;

	while (N > 1) {
		if (N % 3 == 0) {	
			N /= 3;
		}
			
		else if (N % 2 == 0) {
			N /= 2;
		}
			
		else {
			N -= 1;
		}
		min++;
	}
	cout << min;

	return 0;
}