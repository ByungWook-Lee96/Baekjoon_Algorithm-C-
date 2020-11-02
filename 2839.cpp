#include<iostream>

using namespace std;

int main() {

    int N, count;
    cin >> N;
    while (1) {
        if (N >= 3 && N <= 5000)
            break;
        else
            cout << "N은 3에서 5000사이의 숫자만 출력가능합니다.";
        return 0;
    }


    count = 0;
    while (N >= 0) {
        if (N % 5 == 0) {
            cout << N / 5;
            break;
        }
        else {
            N = N - 5;
            count++;
        }
        if (N == 3) {
            cout << count + 1;
            break;
        }
        if (N < 5){
            while (count > 0) {
                count--;
                N = N + 5;
                if (N % 3 == 0) {
                    cout << count + N / 3;
                    return 0;
                }
            }
            if (count <= 0) {
                cout << "-1";
                break;
            }
        }
    
    
    
    
    }




    return 0;

}