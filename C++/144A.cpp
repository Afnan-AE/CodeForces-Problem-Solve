#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n; cin >> n;
    int f[n];
    for(int i = 0; i < n; i++)cin >> f[i];


    if(n == 1) cout << 0;
    else if(n==2)f[0] >= f[1] ? cout << 0 : cout << 1;
    else{
        int bi = 0, si = 0;
        for(int j = 0; j < n; j++){
            if(f[j] > f[bi] ) bi = j;
            if(f[j] <= f[si]) si = j;
        }
    
        int bis = abs(0-bi);
        int sis = abs((n-1)-si);
        
        if(bi > si) cout << (bis+sis)-1;
        else cout << (bis+sis);
    }
    return 0;
}