#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    std::cin >> n;

    if (n < 100000) {
        std::cout << -1;
        return 0;
    }

    for (int a = 100000; a <= std::min(n, 999999); a++) {
        int r3 = a / 100000 + (a / 10000) % 10 + (a / 1000) % 10;
        int l3 = (a / 100) % 10 + (a / 10) % 10 + a % 10;

        if (r3 == l3) {
            std::cout << a << " ";
        }
    }

    return 0;
}
