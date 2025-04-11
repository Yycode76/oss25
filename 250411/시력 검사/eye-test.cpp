#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    double a, b;

	// 입력
	cin >> a >> b;
    
    // 출력
    if(a >= 1.0 && b >= 1.0)
		cout << "High";
	else if(a >= 0.5 && b >= 0.5)
		cout << "Middle";
	else
		cout << "Low";
	
    return 0;
}
