#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 6;
    int c = 7;

    int temp_1 = a;
    int temp_2 = b;
    a = c;
    b = temp_1;
    c = temp_2;

    cout << a << endl
    << b << endl
    << c;
    return 0;
}