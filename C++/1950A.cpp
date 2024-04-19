#include <iostream>
using namespace std;

#define fr() ios::sync_with_stdio(0),cin.tie(0)

int main(){
    fr();
    int n; cin >> n;
    while(n--){
        int a,b,c;
        cin >> a >> b >> c;

        if (a < b && b < c) cout << "STAIR" << '\n';
        else if (a < b && b > c) cout << "PEAK" << '\n';
        else cout << "NONE" << '\n';

    }

    return 0;
}