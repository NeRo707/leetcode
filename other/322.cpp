#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
    int N;
    cin >> N;
    vector<int> a(N);
    map<int, int> freq;
    for(int i = 0; i < N; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    
    int max_freq = 0;
    for(auto it : freq) {
        max_freq = max(max_freq, it.second);
    }
    
    vector<int> res;
    for(auto it : freq) {
        if(it.second == max_freq) {
            res.push_back(it.first);
        }
    }
    
    sort(res.begin(), res.end());
    
    cout << res.size() << endl;
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    
    return 0;
}
