#include <iostream>
using namespace std;

int main(){
     int t; cin >> t;
     while(t--){
          int n; cin >> n;
          int num[n];
          for(int i = 0; i < n;i++) cin >> num[i];
          int mn = num[0], mx = num[0];
          for(int j = 1; j < n; j++){
               if(mx < num[j]) mx = num[j];
               if(mn > num[j]) mn = num[j];
          }
          cout << mx - mn << '\n';
     }
     return 0;
}