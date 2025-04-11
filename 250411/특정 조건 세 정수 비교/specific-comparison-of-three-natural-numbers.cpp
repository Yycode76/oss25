#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int a, b, c;

	// 입력
	cin >> a >> b >> c;
    
    // 출력
    if(a <= b && a <= c)
		cout << "1 ";
	else
		cout << "0 ";
	
	if(a == b && b == c)
		cout << "1";
	else
		cout << "0";
	
    return 0;
}
