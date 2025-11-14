#include <iostream>

using namespace std;

int main() {
    int n, m, b;
    cin>>n>>m>>b;
    
    int r = (b - 1) / m + 1;
    int s = (b - 1) % m + 1;
    
    cout<<r<<" "<<s<<endl;
    
    return 0;
}
