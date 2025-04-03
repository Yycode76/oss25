#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << setprecision(1);
    double ft, mi;
    ft = 30.48;
    mi = 160934;

    cout << "9.2ft = " << round ((9.2 * ft)*10)/10 << "cm" << endl;
    cout << "1.3mi = " << round ((1.3 * mi)*10)/10<< "cm" ;
    return 0;
}