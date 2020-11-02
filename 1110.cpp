#include<iostream>
#include<vector>
using namespace std;

int main() {

	int N[100],S=0,R=0;
	int sum = 0,sum1=0;
	int i=0;

	cin >> N[0];
	
	
		for (int j = 0; j < 100;) {
			if (N[j] < 10) {
				sum1 = N[j]*10+N[j];
			}
			else {
				S = N[j] / 10;
				R = N[j] - S * 10;
				sum = S + R;
				if (sum >= 10) {
					sum1 = sum / 10;
					sum1 = sum - sum1 * 10;
					sum1 = R * 10 + sum1;

				}
				else
					sum1 = R * 10 + sum;


			}
			j++;
			N[j] = sum1;
			i++;
			if (N[j] == N[0])
				break;
		}
	
	cout << i << endl;

	return 0;

}