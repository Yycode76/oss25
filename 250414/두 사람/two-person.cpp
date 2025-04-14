#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a_o,b_o;
    char a_g,b_g;
    cin >> a_o >> a_g;
    cin >> b_o >> b_g;

    if((a_o >= 19 &&a_g == 'M')|| (b_o >= 19 && b_g == 'M'))
         cout << 1;
    else
    cout << 0;
    return 0;
}