#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char c;
    double a, b;

    cin >> c >> a >> b;

    cout << c << endl<< fixed << setprecision(2) << a << endl << b;
    return 0;
}