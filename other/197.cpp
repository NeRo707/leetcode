#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;

    getline(cin, str);

    int cnt = 0;

    for(int k = 0; k < str.size(); k++){
      if(str[k] != ' ' && str[k - 1] == ' '){
        cnt++;
      }
    }

    if(str[0] == ' '){
        cout << cnt;
        return 0;
    }

    cout<<cnt+1<<endl;

    return 0;
}