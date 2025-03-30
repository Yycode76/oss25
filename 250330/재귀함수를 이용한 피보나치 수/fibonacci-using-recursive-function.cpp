#include <iostream>
using namespace std;

// 재귀 함수로 피보나치 수 구하기
int fib(int n) {
    if (n == 1 || n == 2) return 1;  // 첫 번째와 두 번째 항은 1
    return fib(n - 1) + fib(n - 2);  // 이전 두 항의 합
}

int main() {
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}