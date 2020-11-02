#include<iostream>

using namespace std;

int main() {

	int N = 1;
	cin >> N;
	while (1) {
		if (N > 0 && N <= 100000)
			break;
		else
			cout << "N은 0보다크고 100000보다 작은 자연수입니다.";
	}

	for (int i = N; i > 0; i--)
		printf("%d\n", i);

	return 0;
}