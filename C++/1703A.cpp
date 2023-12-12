#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int t; cin >> t;
    string f;

    while(t--){

        cin >> f;

        transform(f.begin(), f.end(), f.begin(), ::tolower);

        if(f == "yes"){
            cout << "YES\n";
        }
        else{cout << "NO\n";}
    }
    return 0;
}