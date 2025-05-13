#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int n;

	// 입력
	cin >> n;
    
    // 출력
	for(int i = n; i <= 100; i++) {
		if(i >= 90)
			cout << "A" << " ";
		else if(i >= 80)
			cout << "B" << " ";
		else if(i >= 70)
			cout << "C" << " ";
		else if(i >= 60)
			cout << "D" << " ";
		else
			cout << "F" << " ";
	}

    return 0;
}
