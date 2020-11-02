#include<iostream>
using namespace std;

int main() {

	int A=0, B=0;

	
	while (cin >> A >> B) {
		if (A > 0 && B < 10)
			cout << A + B << endl;
		else {
			cout << "A는 0 초과이고, B는 10미만의 숫자만 가진다.";
			break;
		}
	}
	return 0;
}