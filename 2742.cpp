#include<iostream>

using namespace std;

int main() {

	int N = 1;
	cin >> N;
	while (1) {
		if (N > 0 && N <= 100000)
			break;
		else
			cout << "N�� 0����ũ�� 100000���� ���� �ڿ����Դϴ�.";
	}

	for (int i = N; i > 0; i--)
		printf("%d\n", i);

	return 0;
}