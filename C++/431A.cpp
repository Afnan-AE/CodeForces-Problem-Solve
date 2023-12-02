#include <iostream>
using namespace std;

int main(){
    int n[4];
    for(int i = 0; i < 4; i++){
        cin >> n[i];
    }

    string g;
    cin >> g;

    long long f[g.length()];

    for(int r = 0 ;  r < g.length(); r++){
        int e = g.at(r);
        f[r] = e-48;
    }

    int t = 0;
    for(int j = 0; j < g.length(); j++){
        t+=n[f[j]-1];
    }

    cout << t;

    return 0;
}