#include <iostream>
using namespace std;

int main(){
     int t; cin >> t;
     while(t--){
          int n ; cin >> n;
          int b[n];
          for(int i = 0; i < n; i++) cin >> b[i];

          int ts=0, tc=0, r=0;
          for(int j = 0; j < n; j++){
               if(b[j] == 0) tc++;
               else if(b[j] == 1){
                    if (ts < tc) ts = tc;
                    tc = 0;
               }
          }

          if(ts < tc) ts = tc;
          
          cout << ts << '\n';
     }

     return 0;
}