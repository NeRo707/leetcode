#include <bits/stdc++.h>

using namespace std;

vector<string> rearrange(vector<string>& vec) {
    int n = vec.size();
    vector<string> ans(n);
    int i = 0;
    for (int k = n / 2; k < n; k++, i += 2)
        ans[i] = vec[k];
    i = 1;
    for (int k = n / 2 - 1; k >= 0; k--, i += 2)
        ans[i] = vec[k];
    return ans;
}

string rearrange(string& str) {
    int n = str.size();
    string ans(n, ' ');
    int i = 0;
    for (int k = n / 2; k < n; k++, i += 2)
        ans[i] = str[k];
    i = 1;
    for (int k = n / 2 - 1; k >= 0; k--, i += 2)
        ans[i] = str[k];
    return ans;
}

int main() {
    string str;
    getline(cin, str);
    
    stringstream ss(str);
    vector<string> vec;
    
    while (ss >> str)
        vec.push_back(str);
    
    vec = rearrange(vec);
    
    for (string& word : vec) {
        word = rearrange(word);
        cout << word << ' ';
    }
    
    return 0;
}
