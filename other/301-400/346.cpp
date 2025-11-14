#include <bits/stdc++.h>
using namespace std;

int main() {
  string code;
  cin >> code;

  long long n = code.size();
  vector<long long> dp(n + 1, 0);

  dp[0] = 1;
  dp[1] = 1;
  

  for (int i = 2; i <= n; i++){
      if(code[i - 1] == 0){
        
        if(code[i-2] == '1' or code[i-2] == '2' or code[i-2] == '3'){
            dp[i] = dp[i-2] + dp[i - 1];
          }

        }else{

        if(code[i-2] == '1' or code[i-2] == '2' or code[i-2] == '3' and ((code[i-1] - '0')  < 4 )){
          dp[i] = dp[i-2] + dp[i-1];
        }else{
          dp[i] = dp[i-1];
        }

      }
      
    }
  

  // for(auto k: dp){
  //   cout<<k<<" ";
  // }cout<<endl;


  cout << dp[n] << endl;

  return 0;
}
