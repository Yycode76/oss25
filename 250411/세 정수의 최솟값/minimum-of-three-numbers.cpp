#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin >> a >> b >> c;

    if(a < b && a <c)
        cout << a;
    if(b < c && b <c)
        cout << b;
    if(c < a && c<b)
        cout << c;
    return 0;
}