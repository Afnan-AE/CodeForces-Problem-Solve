#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        
        string a; cin >> a;
        int c = 0;
        for(int i = 0; i < 3; i++){
            if(a[0] == 'a' || a[1] == 'b' || a[2] == 'c') c++;
        }
        c != 3 ? cout << "NO" << '\n' : cout << "YES" << '\n';

    }
    
    return 0;
}