#include <bits/stdc++.h>
using namespace std;

void reverse_substring(string& str, size_t left, size_t right){
    left--;
    right--;

    while (left < right) {
        swap(str[left], str[right]);
        ++left;
        --right;
    }
}

int main()
{
    string str;
    cin>>str;
    size_t left,right;
    cin>>left>>right;
    reverse_substring(str, left, right);
    cout<< str << endl;

    return 0;
}
