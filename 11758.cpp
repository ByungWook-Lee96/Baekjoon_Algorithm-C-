#include<iostream> //CCW�˰���

using namespace std;

int main() {


	int tem;
	int x[3], y[3];
	for (int i = 0; i < 3; i++)
		cin >> x[i] >> y[i] ;
	tem = (x[0] * y[1] + x[1] * y[2] + x[2] * y[0]) - (y[0] * x[1] + y[1] * x[2] + y[2] * x[0]); // ���� x[0](y[1]-y[2])+x[1](y[2]-y[0])+x[2](y[0]-y[1])
	if (tem > 0)
		cout << 1;
	else if (tem == 0)
		cout << 0;
	else
		cout << -1;

	return 0;


	//p2�� y���� p3�� y�ຸ�� ũ�� 1 ������ -1 x�� y�� ������ 0
}