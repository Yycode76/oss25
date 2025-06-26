#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt=0;

    cin >> n;

    while(true){
        if(n==1)
        break;
        n /= 2;
        cnt++;

        
    }
    cout << cnt;
    return 0;
}