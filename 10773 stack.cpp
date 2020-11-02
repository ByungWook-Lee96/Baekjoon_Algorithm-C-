#include<iostream>
#include<stack>
using namespace std;

stack <int> money;


int main() {

	
	int K,sum=0,num;
	cin >> K;
	for (int i = 0; i < K; i++) {
		cin >> num;
		if (num == 0)
			money.pop();
		else
			money.push(num);
	}

	for (int i = 0; !money.empty(); i++) {
		sum += money.top();
		money.pop();
	}

	cout << sum;

}
