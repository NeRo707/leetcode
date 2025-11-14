#include <bits/stdc++.h>
using namespace std;

void sus(string a){

    size_t size = a.size();
    int even = 0;
    int odd = 0;
    for(int k = 0; k < size; k++){
       if(a[k] % 2 == 0){
        even++;
       }else if(a[k] % 2 == 1){
           odd++;
       }
    }

    if(even > odd){
        cout<<"Even";
    }else if(even < odd){
        cout<<"Odd";
    }else if(even == odd){
        cout<<"Draw";
    }

}

int main()
{
    string n;
    cin>>n;
    sus(n);

    return 0;
}
