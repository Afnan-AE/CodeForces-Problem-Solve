#include <iostream>
using namespace std;

int main(){
    int te; cin >> te;
    while(te--){
        int a,b,c,d = 0;
        cin >> a >> b >> c >> d;
        int t = 0;

        if(a < b){t++;} if(a < c){t++;} if(a < d){t++;}

        cout << t << endl;
    }

    return 0;
}