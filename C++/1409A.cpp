#define ll long long
#define fr() (ios::sync_with_stdio(false), cin.tie(NULL));

#include <iostream>
using namespace std;

int main(){
    fr();
    int t; cin >> t;

    while(t--){
        ll a, b;
        cin >> a >> b;
        if(b < a){
            swap(a, b);
        }
        ll sum = 0, div = 0, sub = 0, mod = 0;
        sub = b - a;
        div = sub / 10;
        mod = sub % 10;
        sum = div;
        if(mod > 0){
            sum++;
        }
        cout << sum << endl;
    }

    return 0;
}