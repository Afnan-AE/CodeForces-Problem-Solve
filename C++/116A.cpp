#include <iostream>
using namespace std;

int main(){
    int f, x, y, k=0;
    cin >> f;

    int n[f];

    for(int i = 0; i < f; i++){
        cin >> x >> y;
        k = (k-x) + y;

        n[i] = k;
    }

    int tmp;
    for(int j = 0; j < f; j++){
        for(int e = 0; e < (f-1); e++){
            if(n[e] > n[e+1]){
                tmp = n[e];
                n[e] = n[e+1];
                n[e+1] = tmp;
            }
        }
    }

    cout << n[f-1];

    return 0;
}