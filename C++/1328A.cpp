#include <iostream>

#define ll long long
#define fr() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

int main(){
    fr();

    ll y, x, z;
    int t; cin >> t;
    while(t--){
        cin >> y >> x;
        if(y%x == 0){
            cout << 0 << endl;
        }
        else{
            z = y/x;
            cout << (x*z + x) - y << endl;
        }

    }

    return 0;
}

