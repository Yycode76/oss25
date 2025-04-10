#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    int h,w;
    cin >> h >> w;

    double b = (10000*w)/(h*h);
    cout << fixed << setprecision(1) << (int)b << endl;

    if(b >= 25) {
        cout << "Obesity";
    }
    return 0;
}