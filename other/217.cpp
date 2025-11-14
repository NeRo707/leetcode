#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    int matrix[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
            if (i == j) {
                sum += matrix[i][j];
            }
            else if (i + j == n - 1) {
                sum += matrix[i][j];
            }
        }
    }

    cout << sum << endl;
    return 0;
}