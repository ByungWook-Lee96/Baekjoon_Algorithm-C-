#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

	vector<int> v(100);
	int N = 0, Max = v[0], Min = v[0];

	cin >> N;
	while (1) {
		if (N >= 1 && N <= 1000000)
			break;
		else {
			cout << "1<=N<=1000000이어야 한다.";
			return 0;
		}
	}
	v.resize(N);

	for (int i = 0; i < v.size(); i++) {
		cin >> v[i];
	}
	Max = *max_element(v.begin(), v.end());
	Min = *min_element(v.begin(), v.end());
	cout << Min << " " << Max << endl;
	
		
	return 0;

}