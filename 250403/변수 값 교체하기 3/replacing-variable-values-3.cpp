#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = 5;
    int temp;

    temp = a;
    a = b;
    temp = b;

    cout << a << endl
    << b;
    return 0;
}