#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool sat = true;

    for( int i =2;i<n;i++){
        if( n % i==0)
        sat = false;
    }
    if( sat == true)
    cout << "P";

    else
    cout <<"C";
    return 0;
}