#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
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
            if (k >= 0 && k < arr.size()) {
                cout << arr[k] << '\n';
            }
        }
    }

    return 0;
}
