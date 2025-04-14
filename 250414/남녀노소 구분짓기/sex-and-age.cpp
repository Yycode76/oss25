#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int gender,old;
    cin >> gender;
    cin >> old;

    if ( gender == 0){
        if(old >= 19)
            cout << "MAN";
        else
            cout << "BOY";
    }
    else{
        if(old >= 19)
            cout << "WOMAN";
        else
            cout << "GIRL";
    }
    return 0;
}