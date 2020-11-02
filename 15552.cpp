#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	vector<int>A(100);
	vector<int>B(100);
	cin >> T;
	A.resize(T);
	B.resize(T);
	for (int i = 0; i < T; i++) {
		cin >> A[i] >> B[i];

	}
	for (int j = 0; j < A.size(); j++)
		cout <<A[j] + B[j] << "\n";


	return 0;
}