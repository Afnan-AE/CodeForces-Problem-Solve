#include <iostream>
using namespace std;
 
int main(){
    int i;
    string w;
 
    cin >> i;
 
    while(i--){
        
        cin >> w;
        
        if(w.length() > 10){
            cout << w.front() << w.length() - 2 << w.back();
        }
        else{
            cout << w;
        }
        cout << '\n';
    }
    return 0;
}