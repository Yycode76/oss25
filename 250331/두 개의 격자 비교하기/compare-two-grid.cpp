#include <iostream>
using namespace std;

int main() {
    // n*m크기 배열 선언 새로운 배열 선언
    int n, m;
    cin >> n >> m;

    int arr_1[n][m];
    int arr_2[n][m];
    int arr_new[n][m];

    // 1배열 입력받음
    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < m; j++ ){
            cin >> arr_1[i][j];
        }
    }

    // 2배열 입력받음
    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < m; j++ ){
            cin >> arr_2[i][j];
        }
    }

    // new배열 입력받음
    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < m; j++ ){
            if( arr_1[i][j] == arr_2[i][j] ){
                arr_new[i][j] = 0; 
            }
            else {
                arr_new[i][j] = 1;
            }
            cout << arr_new[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}