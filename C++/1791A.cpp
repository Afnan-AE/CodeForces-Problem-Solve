#include <iostream>
using namespace std;

int main(){
    string cd = "codeforces";
    int t; cin >> t;

    while(t--){
        char a; cin >> a;
        for(int i = 0; i < cd.length(); i++){
            if(cd[i] == a){cout << "YES\n";break;}
            else if(i==cd.length()-1){cout << "NO\n";}
        }
    }

    return 0;
}