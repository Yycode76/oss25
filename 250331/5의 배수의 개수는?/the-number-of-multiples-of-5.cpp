#include <iostream>
using namespace std;

int main() {
    // 4*4배열 선언 및 입력
    int arr[4][4];
    int cnt = 0;

    for( int i = 0; i < 4; i++ ){
        for( int j = 0; j < 4; j++ ){
            cin >> arr[i][j];
        }
    }

    //배열 원소 중 5의 배수 갯수 출력
    for( int i = 0; i < 4; i++ ){
        for( int j = 0; j < 4; j++ ){
            if( arr[i][j] % 5 == 0 ){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}