#include <iostream>
using namespace std;

int main() {
    // 4*4배열 선언 및 입력
    int arr[4][4];
    int total = 0;

    for( int i = 0; i < 4; i++ ){
        for( int j = 0; j < 4; j++ ){
            cin >> arr[i][j];
        }
    }

    //공원이 1이고 공합이 1인 수열의 해당 값들을 모두 더하는 반복문
    for( int i = 0; i < 4; i++ ){
        for( int j = 0; j < 4; j++ ){
            if( j <= i ){
                total += arr[i][j];
            }
        }
    }
    cout << total;
    return 0;
}