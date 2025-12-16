#include <bits/stdc++.h>

using namespace std;

string LAS(string number){
    string result = "";
    string s = number;
    char r = s[0];
    s = s.substr(1) + " ";
    int t = 1;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == r)
            t++;
        else{
        result += to_string(t) + r;
            t = 1;
            r = s[i];
        }
    }
    return result;
}
int main(){
    string num;
    int b;
    cin >> num >> b;
    vector<string> arr1;
    arr1.push_back(num);
    for (int i = 0; i < b; i++){
        num = LAS(num);
        arr1.push_back(num);
    }
    cout<<arr1[arr1.size() - 2];
    return 0;
}