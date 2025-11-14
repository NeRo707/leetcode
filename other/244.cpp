#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int num_questions = 0;
    int num_answers = 0;
    string message;

    cin >> n;

    for (int i = 0; i < n; i++) {
        getline(cin >> ws, message);

        if (message.back() == '?') {
            num_questions++;
        } else if (message.back() != '?') {
            num_answers++;
        }
    }

    cout << num_questions << endl;
    cout << num_answers << endl;

    return 0;
}
