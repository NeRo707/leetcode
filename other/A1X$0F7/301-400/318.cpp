#include <bits/stdc++.h>

using namespace std;

int main() {
   long long n,s=0,b=0,a=0; cin>>n;
   if (n<10)
   cout<<n<<0<<0<<0<<0;
   if(n>=10){
   for(s=0; s<n-9; s=9+s){
   cout<<9;
   a=a+1;}
   b=n-s;
   cout<<b;
   a=a+1;
   while(a<5){
   cout<<0;
   a=a+1;
}
}

    return 0;
}