#include<iostream>

using namespace std;

int main() {

	static double P = 3.141592;
	
	double R, d2 ,d1;

	cin >> d1 >> d2;
	
	R = 2 * d1 + 2 * P * d2;
	cout.precision(9);     //실수+소수점 자리수=9
	cout << R;
	return 0;
}