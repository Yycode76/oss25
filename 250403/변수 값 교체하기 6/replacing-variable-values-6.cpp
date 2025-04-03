#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = 5;

    int temp = a;
    a = b;
    temp = b;

    cout << a << endl
    << b;

    return 0;
}