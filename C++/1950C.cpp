#include <iostream>
using namespace std;
#define fr() ios::sync_with_stdio(0), cin.tie(0)

int change(int x, int y){
    int a = ((x-48)*10)+(y-48);
    return a;
}

void el(int y){
    if(y==0) cout << "00";
    else cout << '0' << y;
}

int main(){
    fr();
    char a[5]; int n; cin >> n;
    while(n--){
        for (int i = 0; i < 5; i++) cin >> a[i];
        int x, k = 48, y;
        x = change(a[0], a[1]);
        y = change(a[3], a[4]);

        if(x < 12){
            if(x==0) x+=12;
            if(x < 10) el(x);
            else cout << x;
            cout << ':';
            if(y < 10) el(y);
            else cout << y;
            cout << " AM" << '\n';

        }
        else if(x >= 12){
            if(x!=12) x-=12;
            if(x < 10) el(x);
            else cout << x;
            cout << ':';
            if(y < 10) el(y);
            else cout << y;
            cout << " PM" << '\n';
        }
    }

    return 0;
}