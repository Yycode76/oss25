#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed;
    int w = 13;
    double m_g = 0.165000;


    cout.precision(6);
    cout << w << " * " << m_g << " = " << w * m_g; 
    return 0;
}