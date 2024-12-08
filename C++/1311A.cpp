#include <iostream>
using namespace std;

int main(){

    int q; cin >> q;
    while(q--){
                
        int a, b; cin >> a >> b;
        int d = 0;
        int t = 0;

        if(a == b) t = 0;

        else if( a < b ){
            d = b - a;
            d%2 == 0 ? t = 2 : t = 1;
        }
        else{
            d = a - b;
            d%2 == 0 ? t = 1 : t = 2;
        }
        
        cout << t << '\n';

    }

    return 0;
}