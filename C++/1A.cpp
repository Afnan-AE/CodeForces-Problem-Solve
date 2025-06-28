#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

void solve(){

    ll n, m, a;
    cin >> n >> m >> a;

    ll ans = 0;
    double mult = 0.0;

    if (a >= n && a >= m) ans = 1;
    else if(n >= m){
        ans += ceil(double(n)/double(a));
        mult = ceil(((double(m)-double(a))/double(a)));
        if(mult < 0.0) mult = 1.0;
        ans += ans*mult;
    }
    else{
        ans += (ceil(double(m)/double(a)));
        mult = ceil(((double(n)-double(a))/double(a)));
        if(mult < 0.0) mult = 1.0;
        ans += ans*mult;
    }

    cout << ans << '\n';

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}