#include <iostream>

#define ll long long
#define fr() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

int main(){
    fr();

    ll x, y, n;
    int t; cin >>t;
    while(t--){
        ll ans;
        cin >>x>>y>>n;
        ans = n - n%x + y;
        if(ans <= n){
            cout << ans << endl;
        }
        else{
            cout << n - n%x - (x - y) << endl;
        }
    }


    return 0;
}