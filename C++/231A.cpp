#include <iostream>
using namespace std;
 
int main(){
    int n;
    int a = 0;
 
    do{
        cin >> n;
    }while(n < 0);
    
 
    int x[n][3];
 
    for(int j = 0; j < n; j++){
        for(int f = 0; f < 3; f++){
            cin >> x[j][f];
        }
    }
 
 
    for(int e = 0; e < n; e++){
        if((x[e][0] + x[e][1] == 2) || (x[e][1] + x[e][2] == 2) || (x[e][0] + x[e][2] == 2)){
            a += 1;
        }
    }
 
    cout << a;
 
    return 0;
}