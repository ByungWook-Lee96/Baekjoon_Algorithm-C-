#include<iostream>
#include<vector>
using namespace std;

int main() {

	vector <int> A(100);
	vector <int> B(100);

	for (int i = 0; i < A.size(); i++) {
	     cin >> A[i] >> B[i];
		 while (A[i] == 0 && B[i] == 0) {
			 A.resize(i+1);
			 B.resize(i+1);

			 for (int j = 0; j < A.size()-1; j++)
				 cout << A[j] + B[j] << endl;

			 return 0;

		 }


	}
	return 0;

}