#include<iostream>

using namespace std;

char arr[100][81];
int sum[100];

int main() {

	int T;
	cin >> T;

	for(int i=0;i<=T;i++)
		cin.getline(arr[i], 81);

	for (int i = 0; i < sizeof(arr[i]); i++) {
		for (int j = 0; j < sizeof(arr[i]); j++) {
			for (int k = 0; k < sizeof(arr[i]); k++) {
				if (arr[i][j] == 'O') {
					sum[i] += 1;
					if (arr[i][j + k] == arr[i][j + k + 1])
						sum[i] += 1;
				}
			}
			
		}

	}

	for (int i = 0; i < T; i++)
		cout << sum[i] << endl;

	return 0;
	
}