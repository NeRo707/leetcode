    #include <bits/stdc++.h>
    using namespace std;

    char m[101][101];
    vector<char> cs;
    int a, b;
    vector<pair<char,int>> v;  

    int scnt = 0;

    bool rd = false;
    bool dd = false;

    void right(int i, int j, char c, int cnt) {
      for(int k = j; k < b; k++){
        if(m[i][k] == c){
          cnt++;
          if(k != j){
            rd=true;  
            v.push_back({c,cnt});
            return;
          }
        }else{
          cnt++;
        }
      }
    }

    void down(int i, int j, char c, int cnt){
      for(int k = i; k >= 0; k--){
        if(m[k][j] == c){
          cnt++;
          if(k != i){
            dd=true;
            v.push_back({c, cnt});
            return;
          }
        }else{
          cnt++;
        }
      }
    }


    int main() {

      cin >> a >> b;



      for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
          cin >> m[i][j];
        }
      }
/*
      if(a == 1 && b == 1){
        cout<<endl;
        if(m[0][0] != '*')
          cout<<1<<" "<<1;
        else
          cout<<0<<" "<<0;

        return 0;
      }
*/
      for(int i = 0; i < a; i++){
        char c;
        for(int j = 0; j < b; j++){
            if(m[i][j] != '*'){
              c = m[i][j];

              //GO RIGHT
              if(!rd){
                right(i, j, c, 0);
              }
              rd = false;

              //GO DOWN
              if(!dd){
                down(i, j, c, 0);
              }  
              dd=false;
            }
        }
        //cout<<endl;
      }

      //cout<<endl;

      int mx = 0;

      for(int i = 0; i < v.size(); i++){
        if(v[i].second > mx){
          mx = v[i].second;
        }
      }
      /*
      for(int i = 0; i < v.size(); i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
      };
      */
      

     // cout<<endl<<endl;

      cout<<v.size()<<" ";
      cout<<mx;



      return 0;
    }
