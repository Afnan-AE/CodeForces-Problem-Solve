#include <iostream>
using namespace std;

int main(){
    int f;
    int test;
    cin >> test;

    while(test--){
        cin >> f;

        int g[f];

        for(int i = 0; i < f; i++){
            cin >> g[i];
        }

        int cm;
        g[0] == g[1] ? cm = g[0] : cm = g[2];

        for(int e = 0; e < f; e++){
            if(cm != g[e]){
                cout << e+1 << endl;
                break;
            }
        }
    }

    return 0;
}