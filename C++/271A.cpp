#include <iostream>
using namespace std;

int main(){
    int f;
    cin >> f;
    
    while (true)
    {
        f = f + 1;
        int x=0,y=0,z=0,k=0,a=0;
        int t = 0;

        x = f/1000; a = f % 1000;
        y = a/100; a = a % 100;
        z = a/10; a = a % 10;
        k = a/1; 

        if(x != y && x != z && x != k){
            t += true;
        }else{t += false;}
        if(y != z && y != k){
            t += true;
        }else{t += false;}
        if(z != k){
            t += true;
        }else{t += false;}

        if(t == 3){
            cout << f;
            break;
        }
    }

    return 0;
}