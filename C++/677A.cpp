#include <iostream>
using namespace std;

int main(){
    int n, h, f;
    int x = 0;

    cin >> n >> h;

    while(n--){
        cin >> f;
        if(f <= h){
            x += 1;
        }
        else if(f > h){
            x += 2;
        }
    }

    cout << x;

    return 0;
}