#include <iostream>
using namespace std;
#define fr() ios::sync_with_stdio(0), cin.tie(0)


int com(int x, int y, int z){
    int tmp = x;
    if(tmp < y) tmp = y;
    if(tmp < z) tmp = z;
    return tmp;
}

int comp(int x, int y, int z){
    int tmp = x;
    if(tmp > y) tmp = y;
    if(tmp > z) tmp = z;
    return tmp;
}



int main(){
    fr();
    int t; cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;

        int max = com(x, y, z);
        int min = comp(x, y, z);

        if(min < x && x < max) cout << x << '\n';
        if(min < y && y < max) cout << y << '\n';
        if(min < z && z < max) cout << z << '\n';
    }
    return 0;
}