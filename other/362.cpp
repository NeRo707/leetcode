#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    size_t size = n.size();
    int s = 0;
    for(int k = 0; k < size; k++){
        //cout<<n[k]<<" ";
        if(n[k] % 2 == 0){
           s++;
        }
    }
    if(s == size){
        //cout<<s;
        cout<<"YES";
        return 0;
    }else if(s != size){
        //cout<<s;
        cout<<"NO";
        return 0;
    }
    return 0;
}