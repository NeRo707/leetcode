#include <iostream>
using namespace std; int main(){ int n, k; cin >> n >> k; bool bubi_wins = (n - 2) % (k + 1) == 0; string winner = bubi_wins ? "Bubi" : "Babi"; cout << winner << endl; return 0; }