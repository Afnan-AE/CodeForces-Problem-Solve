#include <iostream>
using namespace std;


int main(){
    int x=0, y=0, n, t;
    cin >> n;
    while(n--){
        cin >> t;
        if(t > 0) x += t;
        else if(t < 0){
            if((t+x)<0){
                y+=t;
            }
            else x+=t;
        }
    }
    cout << -1*y << '\n';
    return 0;
}