#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n; cin >> n;
    int d = n/2;
    if(n%2!=0) floor(d);

    int t = 0, f = 1;
    while(f <= d && f != 0){
        n--;
        if(f==1)t++;
        else if(n%f==0)t++;
        f++;
    }

    cout << t;

    return 0;
}