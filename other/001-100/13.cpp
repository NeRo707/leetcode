#include <bits/stdc++.h>

using namespace std;

int main() {
    int Q;
    cin >> Q;

    vector<int> vec;
    string command;
    int x, p, p1, p2;

    while (Q--) {
        cin >> command;
        if (command == "push") {
            cin >> x;
            vec.push_back(x);
        } else if (command == "pop") {
            if (!vec.empty()) {
                vec.pop_back();
            }
        } else if (command == "insert") {
            cin >> p >> x;
            if (p >= 1 && p <= vec.size() + 1) {
                vec.insert(vec.begin() + p - 1, x);
            }
        } else if (command == "erase") {
            cin >> p1 >> p2;
            if (p1 >= 1 && p1 <= vec.size() && p2 >= p1 && p2 <= vec.size()) {
                vec.erase(vec.begin() + p1 - 1, vec.begin() + p2);
            }
        } else if (command == "print") {
            for (int i = 0; i < vec.size(); i++) {
                cout << vec[i];
                if (i < vec.size() - 1) {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}
