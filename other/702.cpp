#include <bits/stdc++.h>

using namespace std;

void pongo (int n, int  x, int y, int z){
    if (n == 1){
        cout << n << " " << x << " " << y << '\n'; 
        return; 
    }
    
    pongo(n - 1, x, z, y); 
    cout << n << " " << x << " " << y << '\n'; 
    pongo(n - 1, z, y, x); 
    
}



int main() {

   int n; 
   cin >> n; 
   
   pongo(n, 1, 3, 2); 

    return 0;
}