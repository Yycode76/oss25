#include <iostream>
using namespace std;

int main() {
    // 정수 n 선언 입력, 배열 선언
    int n;
    cin >> n;
    int arr[n][n];

    // 2단계: 열 순서로 순회하기
for(int i = 0; i < n; i++){
    // i는 i번째 행이 아닌 i번째 열을 의미합니다.
    int cnt = 1;
    // 3단계: 짝수 열과 홀수 열 구분하여 값 채우기
    if(i % 2 != 0){
        for(int j = n - 1; j >= 0; j--) {
            arr[j][i] = cnt;
            cnt++;
        }
    }
    else{
        for(int j = 0; j < n; j++) {
            arr[j][i] = cnt;
            cnt++;
        }
    }
}

// 4단계: 출력하기
for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        cout << arr[i][j];
    }
    cout << "\n";
}
    return 0;
}