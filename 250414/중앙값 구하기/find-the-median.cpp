#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int mid;

    if ((a >= b && a <= c) || (a <= b && a >= c))
        mid = a;
    else if ((b >= a && b <= c) || (b <= a && b >= c))
        mid = b;
    else
        mid = c;

    cout << mid << endl;

    return 0;
}
