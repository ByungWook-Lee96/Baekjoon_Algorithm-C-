#include<iostream>

using namespace std;

int main() {

	int A = 0, B = 0, C = 0;

	cin >> A >> B >> C;
	while (1) {
		if (A >= 2 && B <= 10000 && C <= 10000)
			break;
		else {
			cout << "A>=2,B,C<=10000�� ���ڸ� �����մϴ�.";
			return 0;
		}
	}
	cout << (A + B) % C << endl;
	cout << ((A % C) + (B % C)) % C << endl;
	cout << (A * B) % C << endl;
	cout << ((A % C) * (B % C)) % C << endl;

	return 0;

}