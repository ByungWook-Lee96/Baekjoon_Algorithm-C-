#include<iostream>

using namespace std;

int fuc(int n, int i, int count) {
	

	int num = 0;

	if (n == 0)
		return 1;
	if (n >= 1 && n <= 5)
		return 2;
	if (n <= i * 6 +count)
		return i+1;
	num = i * 6 + count;
	
	

	return fuc(n, i+1, num);
}

int main() {
	int N,result=0;
	int count = 0,i=1;
	cin >> N;
	result=fuc(N-1,i,count);
	cout << result;
}
