#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a , b;
    cin >> a >> b;

    cout << fixed << setprecision(2);
    cout << double((a+b)) / (a-b);
    return 0;
}