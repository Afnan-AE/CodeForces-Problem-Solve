#include <iostream>
using namespace std;

int main(){
    int f, x=0, y=0;
    char g;

    cin >> f;

    while(f--){
        cin >> g;
        switch (g){
            case 'A': x += 1; break;
            case 'D': y += 1; break;
        }
    }
    if(x > y){cout << "Anton";}
    else if(x < y){cout << "Danik";}
    else{cout << "Friendship";}
    
    return 0;
}