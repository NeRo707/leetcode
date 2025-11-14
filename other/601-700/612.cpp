#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  
    string a, b;
    cin >> a >> b;
    
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int alen = a.length(), blen = b.length();
    int carry = 0;
    
    string result = "";
    
    for (int k = 0; k < blen; k++) {
        int sub = (a[k] - '0') - (b[k] - '0') - carry;
        
        if (sub < 0) {
            sub += 10;
            carry = 1;
        } else {
            carry = 0;
        }
        result += to_string(sub);
      }

    for (int k = blen; k < alen; k++) {
        int sub = (a[k] - '0') - carry;
        
        if (sub < 0) {
            sub += 10;
            carry = 1;
        } else {
            carry = 0;
        }
        
        result += to_string(sub);
       
    }
    reverse(result.begin(), result.end());
    while (result.length() > 1 && result[0] == '0') {
        result.erase(0, 1);
    }
    cout << result << endl;
    return 0;
}
