#include <iostream>
using namespace std;

int main() {
    int w,h;
    char a;

    while(1){
        cin >> w >> h >> a;


        cout << w*h << endl;

        if( a == 'C')
        break;
    }
    return 0;
}