#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    int count = 0;
    for (int num = a; num <= b; num++) {
        string num_str = to_string(num);
        if (num_str.length() == 6) {
            int sum1 = 0, sum2 = 0;
            for (int i = 0; i < 3; i++) {
                sum1 += num_str[i] - '0';
                sum2 += num_str[i+3] - '0';
            }
            if (sum1 == sum2) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
