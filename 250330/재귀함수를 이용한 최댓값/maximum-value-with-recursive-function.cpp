#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    if (n == 1) return arr[0]; // 원소가 1개 남았으면 그게 최대
    return max(arr[n - 1], findMax(arr, n - 1));
}

int main() {
    int n;
    cin >> n;

    int arr[100]; // 최대 100개까지 받을 수 있게 설정
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findMax(arr, n) << endl;

    return 0;
}