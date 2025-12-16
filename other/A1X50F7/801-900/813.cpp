#include <bits/stdc++.h>

using namespace std;

int reverse(int n) {
    int rev = 0;
    while(n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int countDivisors(int n) {
    int count = 0;
    for(int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) {
                count++;
            } else {
                count += 2;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin>>n;

    int rev = reverse(n);
    while (rev % 10 == 0) {
        rev /= 10;
    }

    int d = countDivisors(rev);

    cout<<rev<<" "<<d<<endl;

    return 0;
}
