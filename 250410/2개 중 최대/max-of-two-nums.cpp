#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin >> a >> b;

    int max = a < b? b: a;
    cout << max;
    return 0;
}