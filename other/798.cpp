#include <iostream>
using namespace std;

int main() {
    long long n, a, b;
    cin >> n >> a >> b;
    long long blue = 0;

    if (a != 0) {
        blue += n / (a + b) * a;

        long long remainder = n % (a + b);
        if (remainder > a) {
            blue += a;
        } else {
            blue += remainder;
        }
    }
    
    cout << blue << endl;
    return 0;
}
