#include <iostream>
using namespace std;

int main() {
    // 2차원 배열 구현   
    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];

    //첫 번쨰 배열의 입력을 받음
    for( int i = 0; i < 3; i++ ){
        for( int j = 0; j < 3; j; ){
            cin >> arr1[i][j];
        }
    } 

    // 두 번째 배열의 입력 받음
    for( int i = 0; i < 3; i++ ){
        for( int j = 0; j < 3; j; ){
            cin >> arr2[i][j];
        }
    } 

    //두 배열의 곱을 새로운 배열에 담음
     for( int i = 0; i < 3; i++ ){
        for( int j = 0; j < 3; j; ){
            arr3[i][j] = arr1[i][j] * arr2[i][j];
        }
    } 

    //새로운 배열 출력
    for( int i = 0; i < 3; i++ ){
        for( int j = 0; j < 3; j; ){
            cout >> arr3[i][j] << " ";
        }
        cout << endl;
    } 
    
    return 0;
}