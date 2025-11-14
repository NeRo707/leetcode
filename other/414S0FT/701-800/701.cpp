#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
        int sum = 0;
        int num = a[i];
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        cout << sum << " ";
    }

    return 0;
}
