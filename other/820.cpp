#include <bits/stdc++.h>

using namespace std;

string int_sum(string n){
  int sum = 0;
  for(int i = 0; i < n.size(); i++){
    sum += n[i] - '0';
  }
  return to_string(sum);
}

int main(){

  string n;
  cin>>n;

  string sum = int_sum(n);
  int cnt=0;
  for(int k = 0; k < sum.length(); k++){
    if(sum[k] == '0')cnt++;
  }

  cout<<sum<<" "<<cnt<<endl;
  return 0;
}