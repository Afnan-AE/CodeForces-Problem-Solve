#include <iostream>
using namespace std;
#define fr() ios::sync_with_stdio(0), cin.tie(0)

int com(int a, int b, int c){
    int tmp;
    a > b ? tmp = a : tmp = b;
    if(tmp == a) a > c ? tmp = a : tmp = c;
    else b > c ? tmp = b : tmp = c;

    return tmp ;
}

int main(){
    fr();
    int ti; cin >> ti;
    while(ti--){
        int a, b, c, n, t;
        cin >> a >> b >> c >> n;
        t = com(a, b, c);

        int f = ((t-a)+(t-b)+(t-c));

        if(n < f) cout << "NO\n";
        else if((n-f)%3==0 || (n-f)==0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}