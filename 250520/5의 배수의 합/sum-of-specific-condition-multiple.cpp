#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,sum=0;
    cin >> a >> b;

    if( a <= b){
        for( int i = a; i <= b; i++){
            if ( i % 5 ==0)
            sum = sum + i;
        }
        cout << sum;
    }
    else{
    for( int i = a; i >= b; i--){
            if ( i % 5 ==0)
            sum = sum + i;
        }
        cout << sum;
    }
    return 0;
}