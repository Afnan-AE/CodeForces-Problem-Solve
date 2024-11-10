#include <iostream>
using namespace std;
#define fr() ios::sync_with_stdio(0) , cin.tie(0)

int main(){
    fr();
    int t; cin >> t;
    while(t--){
        int x, y, z;   
        cin >> x  >> y >> z;

        if(x == y) cout << z << '\n';
        else if(x == z) cout << y << '\n';
        else cout << x << '\n';
    }
    return 0;
}