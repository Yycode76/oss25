#include <iostream>
using namespace std;

int main() {
    // 가로 세로 길이 선언 입력
    int h , v;
    cin >> h >> v;

    //원하는 길이로 저장
    h += 8;
    v *= 3;

    cout << h << "\n" << v << "\n" << h*v;
    return 0;
}