#include <iostream>
using namespace std;

int main(){
    int n, x, y, t=0;

    cin >> n;

    while(n--){
        cin >> x >> y;

        if((y-x) >= 2){
            t++;
        }
    }

    cout << t;

    return 0;
}