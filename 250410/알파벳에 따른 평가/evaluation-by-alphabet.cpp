#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int c;
    cin >> c;

    if( c==S )
        cout << "Superior";
    else ( c==A )
        cout << "Excellent";
    else ( c==B )
        cout << "Good";
    else ( c==C )
        cout << "Usually";
    else ( c==D )
        cout << "Effort";
    else 
        cout << "Failure";
    
    return 0;
}