#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double ft = 30.48;
    double n;
    cin >> n;


    cout << fixed << setprecision(1) << n * ft;
    
    return 0;
}