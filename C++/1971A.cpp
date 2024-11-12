#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){

        int x, y; cin >> x >> y;
    
        x >= y ? cout << y << ' ' << x << '\n' : cout << x << ' ' << y << '\n';
        
    }

    return 0;
}