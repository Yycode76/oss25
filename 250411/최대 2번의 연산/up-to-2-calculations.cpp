#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    if( n % 2 == 0)
        n /= 2;
    if( n % 2 != 0)
        n = (n+1)/2;
    cout << n;
    return 0;
}