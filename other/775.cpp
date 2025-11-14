#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int snowflakes;

    if(n % 2 == 1){
      snowflakes = 1;
    }else{
      snowflakes = 2;
    }

  while (snowflakes <= n) {
    int dots = (n - snowflakes) / 2;

    for (int i = 0; i < dots; i++) {
      cout << ".";
    }

    for (int i = 0; i < snowflakes; i++) {
      cout << "*";
    }

    for (int i = 0; i < dots; i++) {
      cout << ".";
    }

    cout << endl;

    snowflakes += 2;
  }

  return 0;
}