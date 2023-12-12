#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int x, y, z;
    x = (k*l)/nl;
    y = c*d;
    z = p/np;

    int u;
    min(x,y) == x ? u = x : u = y;
    int f;
    min(y,z) == y ? f = y : f = z;

    if(u < f){
        cout << u/n;
    }
    else{
        cout << f/n;
    }

    return 0;
}