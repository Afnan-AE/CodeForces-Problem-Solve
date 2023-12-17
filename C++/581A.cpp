#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int t = 0;

    while (a >= 1  && b >= 1){
        a--; b--;
        t++;
    }

    int l = 0;
    if(a>1){
        while(a>1){
            a -= 2;
            l++;
        }
    }
    if(b > 1){
        while(b>1){
            b -= 2;
            l++;
        }
    }

    cout << t << ' ' << l;

    return 0;

}