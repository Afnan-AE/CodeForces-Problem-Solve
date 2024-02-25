#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string f; cin >> f;

        cout << f[0];
        for(int i = 1; i < f.length(); i++){
            if(f[i] == f[i+1]){
                cout << f[i];
                i++;
            }
            else{cout<<f[i];}
        }

        cout << '\n';
    }
    return 0;
}