#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    
    double price;
    cin>>price;
    
    price*=m;

    double mn=price; // mn = minimum price
    while(n--){ // n times
        double x,y;
        cin>>x>>y;

        if(m >= x){  
            mn=min(mn,price-(price*(y/100)));
        }else{
            mn=min(mn,price);
        }
    }

    string s=to_string(mn);
    if(s[s.size()-5]=='0'&&s[s.size()-6]=='0'){
        cout<<fixed<<setprecision(0)<<mn;
    }else{
        cout<<fixed<<setprecision(2)<<mn;
    }
    return 0;
}