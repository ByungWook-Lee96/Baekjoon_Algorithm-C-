#include<iostream>
#include<vector>
using namespace std;

int main() {
	int T = 0;
	vector <int> A; //vector�� �����Ҵ��̸� ó�� ������ ������ ������(�ʱ�ȭ) �װͺ��� �������� ������ �þ�� �ϴ� ����� �˰�ʹ�. 
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