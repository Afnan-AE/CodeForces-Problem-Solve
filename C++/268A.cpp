#include <iostream>
using namespace std;

int main(){
     int n; cin >> n;
     int nt = n*2;
     int ar[nt];
     for(int f = 0; f < nt; f++) cin >> ar[f];
     int t = 0;

     for(int i = 0; i < nt; i+=2){
          for(int j = 1; j <= nt; j+=2){
               if(j == i+1) continue;
               else{
                    if(ar[i] == ar[j]) t++;
               }
          }
     }

     cout << t;

     return 0;
}