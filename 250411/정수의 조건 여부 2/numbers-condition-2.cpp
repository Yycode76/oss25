#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;

    if(a == 5)
        cout << "A";
    else if(a % 2 == 0)
        cout << "B";
    else 
        cout << " ";
    return 0;
}