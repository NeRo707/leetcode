#include<iostream>
using namespace std;
int countzero(int num){
    static int count=0;
    if(num>0){
        if(num%10==0)
            count++;
        countzero(num/10);
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    if(n == 0){
        cout<<1;
        return 0;
    }
    cout<<countzero(n);
}