#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    int sum = 0;
    int cnt=0;

    while(cin >> n){

        if(n< 20|| n>=30)
        break;

        sum += n;
        cnt++;

    }

    cout << fixed<< setprecision(2)<< (double)sum/cnt;
    return 0;
}