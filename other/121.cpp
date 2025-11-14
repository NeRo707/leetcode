#include <bits/stdc++.h>
using namespace std;
string n;
int findSum(int k){
  
  if(n[k] == '-')k++;

  int s = n.size();
  int c = n[k] - '0';
  int sum = 0;
  
  if(k == s)return 0;

  sum += c;

  return sum + findSum(k + 1);
}

int main(){

    cin>>n;

    cout<<findSum(0)<<endl;

    return 0;
}