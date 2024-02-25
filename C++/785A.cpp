#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    long long to = 0;
    while(t--){
        string sh; cin >> sh;
        if(sh[0] == 'T'){to+=4;}
        else if(sh[0] == 'C'){to+=6;}
        else if(sh[0] == 'O'){to+=8;}
        else if(sh[0] == 'D'){to+=12;}
        else if(sh[0] == 'I'){to+=20;}
    }
    cout << to << '\n';

    return 0;
}
