#include <iostream>
using namespace std;
 
int main(){
    int M,N;
 
    do{
        cin >> M >> N;
    }while(!(M >= 1 && M <= N));
    
    cout << (M*N)/2;
    
    return 0;
}