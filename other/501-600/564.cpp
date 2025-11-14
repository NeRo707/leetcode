#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    
    map <char, int> freq;

    for(char c: s){
        freq[c]++;
    }

    int odcnt=0;
    char odchr;

    for(auto k : freq){
      if(k.second % 2 == 1){
        odcnt++;
        odchr=k.first;
      }
    }

    if(odcnt > 1){
      cout<<"NO"<<endl;
      return 0;
    }

    string s1="";
    for(auto k : freq){
      for(int i = 0; i < k.second / 2; i++)s1+=k.first;
    }

    string s2 = s1;
    reverse(s2.begin(), s2.end());

    if(odcnt == 1){
      cout<<s1+odchr+s2<<endl;
    } else {
      cout<<s1+s2<<endl;
    }

    // for(auto k: freq){
    //     cout<<k.first<<" "<<k.second<<endl;
    // }

    return 0;
}