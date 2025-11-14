#include <iostream>

using namespace std;
int main() {
    int m,a,sum=0,c;

    cin >> m >> a;
    int array[a];

        for (c = 0; c < a; c++) {
            cin >> array[c];
            if(array[c] < 0){
                return 0;
            }
            sum += array[c];
        }
        if(sum > m){
            printf("NO");
        }else{
            printf("YES");
        }

        return 0;
    }