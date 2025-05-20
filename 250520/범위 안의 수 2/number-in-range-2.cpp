#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,cnt=0,sum = 0;

    for( int i = 0; i < 10; i++){
        cin >> n;
        if( n >= 0 && n <=200){
        sum = sum + n;
        cnt++;
        }
    }
    double avg = (double)sum/cnt;
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;
    return 0;
}