#include <bits/stdc++.h>

using namespace std;

int main() {
  string str;
  cin>>str;
  
  const char* cstr = str.c_str(); //str to array :>

  int numCount = 0; //numcount
  int strCount = 0; //uppercasecount
  int charCount = 0; //lowercasecount

  for(int k = 0; k < str.length(); k++){
    if(cstr[k] >= 48 && cstr[k] <= 57){
      numCount++;
    }else if(cstr[k] >= 91 && cstr[k] <= 122){
      strCount++;
    }else if(cstr[k] >= 65 && cstr[k] <= 90){
      charCount++;
    }
    //cout<< cstr[k]<<" ";
  }
  cout<<"\n";
  cout<<numCount<<" "<<charCount<<" "<<strCount;

    return 0;
}