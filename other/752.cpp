#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  int sum1 = 0, sum2 = 0;
  
  for(int i = 0; i < 6; i++){
    int digit = n % 10;
    n /= 10;
    if(i < 3){
      sum1 += digit;
    }else{
      sum2 += digit;
    }
  }
  
  if(sum1 == sum2){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }

  return 0;
}
