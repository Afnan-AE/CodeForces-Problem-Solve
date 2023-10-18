#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string s, t, z;
 
 
    do{
        cin >> s >> t;
    }while(s.length() < 1 && t.length() < 1);
 
    for(int i = (s.length() - 1); i >= 0; i--){
        z += s.at(i);
    }
 
    if(t == z){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
 
    return 0;
}