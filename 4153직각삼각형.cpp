#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> v;

int main() {

	int A=1, B=1, C=1;


	for (int i = 0;; i++) {
		cin >> A >> B >> C;
		if (A == 0 && B == 0 && C == 0) {
			break;
		}
		int arr[] = { A,B,C };
		sort(arr, arr + 3);
		if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]) {
			v.push_back(1);
		}
		else {
			v.push_back(0);
		}

		

	}
	
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == 0) {
			cout << "wrong\n";
		}
		else {
			cout << "right\n";
		}
	}
	

}