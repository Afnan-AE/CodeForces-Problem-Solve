#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){

        int k; cin >> k;
        string f; cin >> f;

        int s, e;
        for(int i = 0; i < f.length(); i++){
            if(f[i] == 'B') {s = i; break;}
        }
        for(int j = f.length(); j > 0; j--){
            if(f[j-1] == 'B'){e = j; break;}
        }

        int d = e-s;
        
        d == 0? cout << 1 << '\n': cout << d << '\n';

    }

    return 0;    
}