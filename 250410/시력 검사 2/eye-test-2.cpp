#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double avg;
    cin >> avg;

    if( avg >= 1.0)
        cout << "High";
    else if ( avg >= 0.5 )
        cout << "Middle";
    else 
        cout << "Low";
    return 0;
}