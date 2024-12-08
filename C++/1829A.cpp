#include <iostream>
using namespace std;

int main(){

    int t ; cin >> t;

    while(t--){
        string s; cin >> s;
        int c = 0;
        string ch = "codeforces";
        for(int i = 0; i < 10; i++){
            if(s[i] != ch[i])c++;
        }
        cout << c << '\n';
    }
    

    return 0;
}