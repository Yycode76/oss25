#include <iostream>
using namespace std;

int main() {
    // 선업 입력
    int a,b;
    cin >> a >> b;

    cout << a+b << "\n" << a-b << "\n" << double(a/b) << "\n" << double(a%b);
    return 0;
}