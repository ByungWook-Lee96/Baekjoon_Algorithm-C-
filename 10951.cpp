#include<iostream>
using namespace std;

int main() {

	int A=0, B=0;

	
	while (cin >> A >> B) {
		if (A > 0 && B < 10)
			cout << A + B << endl;
		else {
			cout << "A�� 0 �ʰ��̰�, B�� 10�̸��� ���ڸ� ������.";
			break;
		}
	}
	return 0;
}