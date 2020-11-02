#include<iostream>
#include<vector>
using namespace std;

vector<int> arr;

int main() {
	int M, N,count=0,min=0,sum=0;
	cin >> M >> N;

	//소수는 자기 자신과 1만 원소로 가진다.
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				if (i >= M) {
					count++;
				}
			}

		}
		if (i >= M) {
			if (count == 2) {
				arr.push_back(i);
				sum += i;
			}
		}
		count = 0;
		
	}
	if (sum != 0) {
		cout << sum << endl;
		cout << arr[0] << endl;
	}
	else
		cout << -1;
			
		
	
}