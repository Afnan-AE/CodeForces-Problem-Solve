#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    
    for(int i = 1; i <= n; i++){
        if(i != n){
            i % 2 != 0 ? cout << "I hate that " : cout << "I love that ";
        }
        else{
            i % 2 != 0 ? cout << "I hate it " : cout << "I love it ";
        }
    }

    return 0;
}