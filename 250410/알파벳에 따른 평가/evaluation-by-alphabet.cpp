#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char t;
    cin >> t;

    if( t =='S' )
        cout << "Superior";
    else if( t =='A' )
        cout << "Excellent";
    else if( t =='B' )
        cout << "Good";
    else if( t =='C' )
        cout << "Usually";
    else if( t =='D' )
        cout << "Effort";
    else 
        cout << "Failure";
    return 0;
}