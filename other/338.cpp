#include <iostream>

using namespace std;

int main() {
    int n, a, b;
    cin>>n;
    cin>>a>>b;
    
    
    if((a == 1 && b == n || a == n && b == 1) || (a - b == 1 || b - a == 1)) {
            cout<<"YES";
        }else {
            cout<<"NO";
        }
        
      

    return 0;
}