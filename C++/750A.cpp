#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int t = 0;
    int i = 1;

    int l = 4*60 - b;

    while(l > 0){
        l = l - 5*i;
        i++;
        if(l >= 0){t++;}
        if(t == a){break;}
    }

    cout << t;

}