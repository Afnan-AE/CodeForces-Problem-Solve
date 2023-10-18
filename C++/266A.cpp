#include <iostream>
using namespace std;
 
int main(){
    int f = 0, x;
    do{
        cin >> x;
    }while(x < 0);
 
    char s[x];
 
    for(int j = 0;j < x; j++){
        cin >> s[j];
    }
 
    for(int i = 0;i < (x-1); i++){
        if(s[i] == s[i+1]){
            f++;
        }
    }
 
    cout << f;
 
    return 0;
}