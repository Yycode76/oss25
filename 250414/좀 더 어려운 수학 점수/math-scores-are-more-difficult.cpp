#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a_m,a_e;
    int b_m,b_e;
    char winner;
    
    
    cin >> a_m >> a_e;
    cin >> b_m >> b_e;

    if(a_m == b_m){
         winner = (a_e > b_e)?'A':'B';
        cout << winner;
    }
    else{
         winner = (a_m > b_m)?'A':'B';
        cout << winner;
    }
    
    return 0;
}