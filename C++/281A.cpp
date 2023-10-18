#include <iostream>
using namespace std;
 
int main(){
    string g;
    cin >> g;
 
    if(g.at(0) >= 'A' && g.at(0) <= 'Z'){
        cout << g;
    }
    else{
        g[0] = towupper(g[0]);
        cout << g;
    }
 
    return 0;
}