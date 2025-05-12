#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin >> a >> b;

    //정수부분 입력
    cout << a/b << ".";

    //나머지를 시작으로 소수점 자리를 하나씩 계산
    a%=b;
    for( int i =0; i<20; i++){
        //10을 곱한값을 기준으로 몫을 구함
        a*=10;
        cout << a/b;
        //나머지 갱신
        a%=b;
    }
      
    return 0;
}