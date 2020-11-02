#include<iostream>
using namespace std;

int main() {

	int N = 0;
	cin >> N;
	for (int i = 0; i < N+1; i++) {
		if (i < N) {
			for (int j = 0; j <= i; j++) {
				cout << "*";
			}
			cout << endl;
		}
		else
			for (int k = 0; k < N - 1; k++) {
				for (int l = N - 1 - k; l > 0; l--) {
					cout << "*";

				}
				cout << endl;
					
			}
	}
	return 0;

}
