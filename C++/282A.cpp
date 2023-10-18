#include <iostream>
using namespace std;
 
int main(){
    int f, x = 0;
    string l;
 
    do{
        cin >> f;
    }while(f < 0);
 
    while(f--){
        cin >> l;
 
        if(l == "X++" || l == "++X"){
            x++;
        }
 
        if(l == "X--" || l == "--X"){
            x--;
        }
    }
 
    cout << x;
 
    return 0;
}