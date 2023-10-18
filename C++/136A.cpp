#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int f[n];
    for(int e = 0; e < n; e++){
        cin >> f[e];
    }

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n; j++){
            if(i == f[j]){
                cout << j+1 << ' ';
            }
        }
    }

    return 0;
}