#include<iostream>
#include<algorithm>
using namespace std;

int bigo[5][5];
int call[5][5];

int main() {

	int count = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> bigo[i][j];
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> call[i][j];
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			bigo[i][j].find(call[i][j], 0);
		}
	}


}