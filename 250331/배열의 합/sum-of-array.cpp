#include <iostream>
using namespace std;

int main() {
    // 4개 배열 선언
    int arr[4][4];
   
    
    // 4개 배열 입력
    for( int i = 0; i < 4; i++ ){
        for( int j = 0; j < 4; j++ ){
            cin >> arr[i][j];
        }
    }

    //줄의 합 구하기
     for( int i = 0; i < 4; i++ ){
        int total = 0;
        for( int j = 0; j < 4; j++ ){
            total += arr[i][j];
        }
        cout << total << " ";
        cout << endl;
    }
 
    return 0;
}