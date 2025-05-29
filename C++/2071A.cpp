#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        int k; cin >> k;
    
        double f = (double(k)-1+3)/3;
        int fo = (k-1+3)/3;
    
        if(f-double(fo) == 0.0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}