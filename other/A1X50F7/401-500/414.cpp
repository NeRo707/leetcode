#include <bits/stdc++.h>
#include <string>
using namespace std;

int numFinder(int a, int b)
{
    string t1, t2, s;
    t1 = to_string(a);
    t2 = to_string(b);
    
    if(a > b){
         s = (t1 + t2);   
    } else {
         s = (t2 + t1);
    }

   int x = stoi(s);
    return x;
}

int main() {
    int a,b;
     cin >> a >> b;
     cout << numFinder(a,b) + 1 << endl;
    return 0;
}