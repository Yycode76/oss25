#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 0;
    cin >> n;

    for(int i =1;i <= n;i++ ){
        if ((i % 2 == 0 || i%3==0) || i%5==0){
            continue;
        }
        else
        cnt++;
    }
    cout << cnt;
    return 0;
}