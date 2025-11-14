#include <cmath>
#include <iostream>

using namespace std;

int main() {

  int num;
  cin >> num;
  int reverse = 0;
  int lastNum;
  while (num != 0) {
    lastNum = num % 10;
    reverse = reverse * 10 + lastNum;
    num = floor(num / 10);
  }

  cout << reverse;
  return 0;
}