#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        string s = to_string(i);
        int len = s.size();
        if (len % 2 == 0) {
            int sum1 = 0, sum2 = 0;
            for (int j = 0; j < len/2; j++)
                sum1 += s[j] - '0';
            for (int j = len/2; j < len; j++)
                sum2 += s[j] - '0';
            if (sum1 == sum2){
                //cout<<sum1<<" "<<sum2<<endl;
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
