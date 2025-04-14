#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin >> a >> b >> c;
    char max;

    if (a>b && a >c){
        max = a;
        cout << a;
    }
    else if( b>a && b>c){
         max = b;
        cout << b;
    }
    else{
         max = c;
        cout << c;
    }
    return 0;
}