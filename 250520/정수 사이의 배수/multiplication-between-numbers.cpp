#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,cnt=0,sum=0;
    cin >> a >> b;
    
    for( int i = a;i <=b; i++){
        if( i % 5 == 0 || i % 7 == 0){
            sum = sum + i;
            cnt++;
        }
    }
    double avg = (double)sum/cnt;
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;
    return 0;
}