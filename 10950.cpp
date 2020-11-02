#include<iostream>
#include<vector>
using namespace std;

int main() {
	int T = 0;
	vector <int> A; //vector가 동적할당이면 처음 원소의 개수를 지정후(초기화) 그것보다 많아지면 저절로 늘어나게 하는 방법을 알고싶다. 
	vector <int> B;
	

	cin >> T;

	A.resize(T);
	B.resize(T);

	for (int i = 0; i < T; i++)
		cin >> A[i] >> B[i];

	for (int j = 0; j < T; j++)
	cout << A[j] + B[j] << endl;

	return 0;
}