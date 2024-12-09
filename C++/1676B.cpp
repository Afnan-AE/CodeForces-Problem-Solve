#include <iostream>
using namespace std;

int main(){
    int t1; cin >> t1;
    while(t1--){
        int n; cin >> n;
        int f[n];

        
        for(int i = 0; i < n; i++) cin >> f[i];
        int s = f[0];

        for(int j = 0; j < n; j++) if(s > f[j]) s = f[j];
        int t = 0;
        for(int h = 0 ; h < n; h++) t+=(f[h]-s);

        cout << t << '\n';
    }
    
    return 0;
}