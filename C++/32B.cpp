#include <iostream>
using namespace std;
 
int main(){
    
    string x;
 
    do{
        cin >> x;
    }while(x.length() < 0);
    
 
    for(int i = 0;i <= x.length() - 1; i++){
        if(x.at(i) == '-' && x.at(i + 1) == '.'){
            cout << '1';
            i++;
        }
        else if(x.at(i) == '-' && x.at(i + 1) == '-'){
            cout << '2';
            i++;
        }
        else if(x.at(i) == '.'){
            cout << '0';
        }
    }
}