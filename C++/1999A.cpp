#include <iostream>
using namespace std;

int main(){

    int t; cin  >> t;
    while(t--){
        string a; cin >> a;
        int x = (a[0] - '0');
        int y = (a[1] - '0');

        int r = x+y;
        cout << r << '\n';
    }

    return 0;
}