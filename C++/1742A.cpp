#include <iostream>
using namespace std;

int main(){
    int a, b, c, n;
    cin >> n;

    while(n--){
        cin >> a >> b >> c;

        if(a == b+c){cout << "YES\n";}
        else if(b == a+c){cout << "YES\n";}
        else if(c == b+a){cout << "YES\n";}
        else{cout << "NO\n";}
    }

    return 0;
}