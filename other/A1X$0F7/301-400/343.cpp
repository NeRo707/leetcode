#include<iostream>
using namespace std;

int main()
{
    int n  , a  , b , c ;
    
    cin >> n;
    cin >> a >> b >> c;  //NOT A FINAL CODE JUST TESTING 🗿
    
    if(a == 0 || b == 0 || c == 0){
        cout << "NO";
        return 0;
    }
    
    if(n >= 3 && n <= 100) 
    
    if(b - a == 1 && c - b == 1 || b - a == -1 && c-b == - 1 ){
     cout << "YES";
     return 0;
    }else if(a - b == 1 && c - b == 1) {
    cout << "YES";
    return 0;
    }else if( (a == n && b == n - c && c == a - b) || (a == b - c && b == n && c == b - a) || (a == c - b && b == c - a && c == n)) {
    cout << "YES";
    return 0;
    }else if((a - b == 1 && c - a == 1) || (c - b == 1 && a - c == 1) || ( b - c == 1 && c - a == 1) || (b - a == 1 && a - c == 1 ) || ( a == c - a && b == n) || (a == n && b == c - b) || (c == a - c && b == n) || (c == n && b == a - b) || ( a == b - a && c == n) || (a == n && c == b - c)){
        cout << "YES";
        return 0;
    }else{
    cout << "NO";
    return 0;
    } 
    cout << "NO";
    return 0;
} 