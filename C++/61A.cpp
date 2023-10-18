#include <iostream>
using namespace std;
 
int main(){
    string x,y;
    
    do{
        cin >> x >> y;
    }while(x.length() < 0 && y.length() < 0);
    
    for(int i = 0; i < x.length(); i++){
        if(x.at(i) == y.at(i)){
            cout << "0";
        }
        else{
            cout << "1";
        }
    }
    return 0;
}