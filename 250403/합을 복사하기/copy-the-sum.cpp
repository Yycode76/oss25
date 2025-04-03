#include <iostream>
using namespace std;

int main() {
    //변수 선언
    int a = 1, b = 2, c = 3;

    //변수 저장
    a = b = c = a+b+c;

    cout << a << " " << b << " " << c;
    return 0;
}