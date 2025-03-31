#include <iostream>
using namespace std;

int main() {
    // 정수선언 및 입력
    int n;
    cin >> n;
    int arr[n][n];
    

    //배열 저장
    for( int i = 0; i < n; i++ ){
        int cnt = 1;
        for( int j = 0; j < n; j++ ){
            arr[i][j] = cnt;
            cnt++;
        }
    }

    //배열 지그재그 출력
    for( int i = 0; i < n; i++ ){
        if( i % 2 == 0){
            for( int j = 0; j < n; j++ ){
                cout << arr[i][j];
            }
        }
        if( i % 2 != 0){
            for( int j = n-1; j >= 0; j-- ){
                cout << arr[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}