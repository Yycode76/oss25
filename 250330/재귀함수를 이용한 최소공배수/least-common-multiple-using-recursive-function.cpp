#include <iostream>
using namespace std;

// 재귀로 최대공약수(GCD) 구하기
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// 최소공배수 구하기
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

// n개의 수 중 재귀로 최소공배수 구하기
int lcmArray(int arr[], int n) {
    if (n == 1) return arr[0];
    return lcm(arr[n - 1], lcmArray(arr, n - 1));
}

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << lcmArray(arr, n) << endl;
    return 0;
}