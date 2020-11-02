#include<iostream> //CCW알고리즘

using namespace std;

int main() {


	int tem;
	int x[3], y[3];
	for (int i = 0; i < 3; i++)
		cin >> x[i] >> y[i] ;
	tem = (x[0] * y[1] + x[1] * y[2] + x[2] * y[0]) - (y[0] * x[1] + y[1] * x[2] + y[2] * x[0]); // 공식 x[0](y[1]-y[2])+x[1](y[2]-y[0])+x[2](y[0]-y[1])
	if (tem > 0)
		cout << 1;
	else if (tem == 0)
		cout << 0;
	else
		cout << -1;

	return 0;


	//p2의 y축이 p3의 y축보다 크면 1 작으면 -1 x와 y가 같으면 0
}