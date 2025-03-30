#include <iostream>

using namespace std;
void flower(int n) {
    if (n == 0) return;
    cout << n << " ";
    flower(n - 1);
    cout << n << " ";
}

int N;

int main() {
    cin >> N;
flower(N);
    return 0;
    

    return 0;
}