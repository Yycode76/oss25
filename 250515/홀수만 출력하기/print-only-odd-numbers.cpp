#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n];

    for( int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for( int i = 0; i < n; i++){
        if ( arr[i] % 3 == 0)
        cout << arr[i] << endl;
    }

    
    return 0;
}