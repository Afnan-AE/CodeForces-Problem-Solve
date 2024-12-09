#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
            
        int a1,a2,a3;
        a1 = a+b;
        a2 = b+c;
        a3 = a+c;

        if(a1 >= 10 || a2 >= 10 || a3 >= 10) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
    
}