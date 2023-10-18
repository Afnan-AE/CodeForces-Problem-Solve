#include <iostream>
using namespace std;
 
int main(){
    int x, t = 0;
    cin >> x;
 
    int f[x];
 
    for(int i = 0; i < x ; i++){
        cin >> f[i];
    }
 
    int max = f[0];
    int min = f[0];
 
    for(int j = 0; j < x; j++){
        if(f[j] > max){
            max = f[j];
            t++;
        }
        else if(f[j] < min){
            min = f[j];
            t++;
        }
    }
    cout << t;
 
    return 0;
}