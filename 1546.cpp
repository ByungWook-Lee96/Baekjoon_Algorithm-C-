#include<iostream>
#include<algorithm>
using namespace std;

double arr[1001];

int main() {

	int N;
	double max,sum=0.0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	max=*max_element(arr, arr + N);

	
	for (int i = 0; i < N; i++) {
		arr[i] = arr[i] / max * 100.0;
		sum += arr[i];
	}
	cout << sum / (double)N;

	return 0;


}