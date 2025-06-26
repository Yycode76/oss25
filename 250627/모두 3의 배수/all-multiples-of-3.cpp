#include <iostream>
using namespace std;

int main() {
    int n;
    bool sat = true;
    for( int i =0;i<5;i++){
        cin >> n;
        if(n%3!=0){
        sat=false;
        break;
        }
    }
    if( sat == true)
    cout << 1;
    else
    cout <<0;
    return 0;
}