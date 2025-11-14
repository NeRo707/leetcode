#include <bits/stdc++.h>
using namespace std;

int main() {  
    int arr[8][8];
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++)
        {
            cin >> arr[i][j];
        }
    };

    int sum = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++)
        {
          if((i+j) % 2 != 0) {
              sum += arr[i][j];
          }
        }
    };
    
    cout << sum << endl;
    return 0;
}