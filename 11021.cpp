#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {


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
		cout << "Case #" << j + 1 << ": " << A[j] + B[j]<<endl;
		

	return 0;
}