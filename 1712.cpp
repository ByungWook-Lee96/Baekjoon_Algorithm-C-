#include<iostream>

using namespace std;

int main() {

	double A = 0, B = 0, C = 0, point=0;
	cin >> A >> B >> C;


	if (C == B) {
		cout << "-1" << endl;
	}
	else if(C < B)
		cout << "-1" << endl;
	else {
		point = A / (C - B);
		cout << (int)point+1;
	}

	return 0;


}