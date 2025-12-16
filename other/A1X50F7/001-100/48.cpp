#include <bits/stdc++.h>

using namespace std;

int main(){
    char op;
    float num1, num2;
    cin >> num1 >> op >>num2;

    switch (op) {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        default:
            return 0;
    }

    return 0;

}