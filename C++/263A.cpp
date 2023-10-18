#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
 
    int f, a=0;
 
    for(int i = 1; i < 6; i++){
        for(int j = 1; j < 6; j++){
            cin >> f;
            if(f == 1){
                a = abs(i-3)+abs(j-3);
            }
        }
    }
    cout << a;
 
    return 0;
}