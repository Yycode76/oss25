#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, a, b, c;

    getline(cin, input);  // "010-1234-5678" 통째로 읽음

    a = input.substr(0, 3);   // "010"
    b = input.substr(4, 4);   // "1234"
    c = input.substr(9, 4);   // "5678"

    cout << a << '-' << c << '-' << b << endl;
    return 0;
}
