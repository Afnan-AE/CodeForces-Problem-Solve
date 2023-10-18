#include <iostream>
using namespace std;

int main(){
    int w, n, k;

    cin >> w >> n >> k;

    int x = 0;
    for(int i = 1; i <= k; i++){
        x += w*i;
    }

    if(x == n || x < n){
        cout << '0';
    }
    else{
        cout << x-n;
    }

    return 0;
}