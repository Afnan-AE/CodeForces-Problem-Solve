#include <iostream>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int s = (n*m);
    char p[s];

    int c = 1;

    for(int i = 0; i < s; i++){
        cin >> p[i];
        if(p[i] == 'C' || p[i] == 'M' || p[i] == 'Y') c = 0;
    }

    c == 1 ? cout << "#Black&White" : cout << "#Color";


    return 0;
}