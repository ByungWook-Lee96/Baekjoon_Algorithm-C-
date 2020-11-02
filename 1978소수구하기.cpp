#include<iostream>

using namespace std;


int arr[1001];


int main() {
    int N, count = 0, count1 = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        for (int j = arr[i]; j >= 1; j--)
        {
            if (arr[i] % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            count1++;
        }

        count = 0;
    }


}
cout << count1;


}