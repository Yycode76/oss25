#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int score = n == 100? "pass": "failure";
    cout << score;
    return 0;
}