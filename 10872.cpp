#include<iostream>

using namespace std;

int arr[13];
int fac(int n) {
	if (n == 0)  return 1;
	if (arr[n] != 0) return arr[n];
	return arr[n]=n * fac(n - 1);
}

int main() {

	int N;
	scanf_s("%d",&N);
	if (N >= 0 && N <= 12) {
		printf("%d", fac(N));

		return 0;
	}
	else {
		printf("잘못입력");
		return 0;

	}
	

}