#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
            int n; cin >> n;
            int f[n];
            for(int i = 0; i < n; i++) cin >> f[i];

            if(n == 1) cout << "YES\n";
            else if(n == 2) f[0] != f[1] ? cout << "YES\n" : cout << "NO\n";
            else{
                //sort
                int tmp = 0;
                for(int j = 0; j < n; j++){
                    for(int w = 0; w < n-1; w++){
                        if(f[w] > f[w+1]){
                            tmp = f[w];
                            f[w] = f[w+1];
                            f[w+1] = tmp;
                        }
                    }
                }

                int ans = 0;
                for(int q = 0; q < n; q++){
                    if(f[q] == f[q+1]){ans = 1; break;}
                }
                
                ans == 0 ? cout << "YES\n" : cout << "NO\n";

            }
    }
    
    return 0;
}