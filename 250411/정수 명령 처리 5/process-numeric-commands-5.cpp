#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;
    vector<int> arr;

    for (int i = 0; i < N; i++) {
        string cmd;
        cin >> cmd;

        if (cmd == "push_back") {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        else if (cmd == "pop_back") {
            if (!arr.empty()) arr.pop_back();
        }
        else if (cmd == "size") {
            cout << arr.size() << '\n';
        }
        else if (cmd == "get") {
            int k;
            cin >> k;
            // 예제에 맞춰서 1-based index 처리
            if (k >= 1 && k <= arr.size()) {
                cout << arr[k - 1] << '\n';
            }
        }
    }

    return 0;
}
