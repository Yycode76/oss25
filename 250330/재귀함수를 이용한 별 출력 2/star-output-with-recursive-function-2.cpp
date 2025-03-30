#include <iostream>
using namespace std;

// 한 줄에 별을 n개 출력하는 재귀함수
void printLine(int n) {
    if (n == 0) return;
    cout << "* ";
    printLine(n - 1);
}

// 줄 수를 줄이며 출력 → 다시 늘리며 출력
void printPattern(int n) {
    if (n == 0) return;
    
    printLine(n);      // 별 n개 출력
    cout << endl;

    printPattern(n - 1); // 줄 수 줄이며 재귀

    printLine(n);      // 별 n개 다시 출력
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    printPattern(n);
    return 0;
}
