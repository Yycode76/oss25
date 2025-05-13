#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char c,a,d;
    int n;
    cin >> c >> n;
    
    if( 'c' == 'a'){
        for ( int i = 1; i <= n;i++)
        cout << i << " ";
    }
    if( 'c' == 'd' ){
        for ( int i = n; i >= 1; i--)
        cout << i << " ";
    }

    return 0;
}