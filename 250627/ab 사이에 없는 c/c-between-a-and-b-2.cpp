#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    bool satisfied = ture;

    for ( int i =a; i<=b; i++){
        if(i%c == 0){
        satisfied = false;
        break;
        }

    }
    if(satisfied == ture)
    cout << "YES";

    else
    cout <<"NO";
    return 0;
}