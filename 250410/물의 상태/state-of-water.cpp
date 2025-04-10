#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int temp;

	// 입력
	cin >> temp;
    
    // 출력
    if(temp < 0)
		cout << "ice";
	else if(temp >= 100)
		cout << "vapor";
	else
		cout << "water";
    return 0;
}