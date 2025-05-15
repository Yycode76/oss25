#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    

    for( int i = 0; i < n; i++){
        int arr[n];
        cin >> arr[i];
    }

    for( int i = 0; i < n; i++){
        if ( arr[i] % 3 == 0)
        cout << arr[i] << endl;
    }

    
    return 0;
}