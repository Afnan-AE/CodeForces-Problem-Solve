#include <iostream>
using namespace std;
 
int main(){
    int x, y, a;
 
    cin >> x >> y;
 
    int f[x];
 
    for(int i = 0; i < sizeof(f)/sizeof(f[0]);i++){
        cin >> f[i];    
    }
    
    for(int j = 0; j < sizeof(f)/sizeof(f[0]);j++){
        if(f[j] == 0){
            a += 0;
        }
        else if(f[j] >= f[y-1]){
            a += 1;
        }
    }
    
 
    cout << a;
 
    return 0;
}