#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a;
    cin >> a;

    cout << fixed << setprecision(2) << a + 1.5;
    return 0;
}