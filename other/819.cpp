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

int sumDivisors(int n) {
    int ld = n % 100;
    int sum = 0;
    for (int i = 1; i <= ld; i++) {
        if (ld % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n;
    cin>>n;

    int rev = reverse(n);
    while (rev % 10 == 0) {
        rev /= 10;
    }

    int d = sumDivisors(rev);

    cout<<rev<<" "<<d<<endl;

    return 0;
}