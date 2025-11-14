#include <bits/stdc++.h>
using namespace std;

int c[8][8]={
  {1,0,1,0,1,0,1,0},
  {0,1,0,1,0,1,0,1},
  {1,0,1,0,1,0,1,0},
  {0,1,0,1,0,1,0,1},
  {1,0,1,0,1,0,1,0},
  {0,1,0,1,0,1,0,1},
  {1,0,1,0,1,0,1,0},
  {0,1,0,1,0,1,0,1}
};


int main() {

  string s;
  cin>>s;

  int x = s[0] - 'A';
  int y = s[1] - '1';
  
  c[x][y] == 0 ? cout<<"WHITE" : cout<<"BLACK";

  
  return 0;
}
