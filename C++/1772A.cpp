#include <iostream>
using namespace std;


int main(){
    int n; cin >> n;
    while(n--){
        char f[3];
        for(int i = 0; i < 3; i++) cin >> f[i];
        int x = f[0], y = f[2];
        cout << (x+y) - 48*2 << '\n';
    }

    return 0;
}
