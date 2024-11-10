#include <iostream>
using namespace std;
#define fr() ios::sync_with_stdio(0) , cin.tie(0)

int main(){
    fr();
    int x; cin >> x;
    if(x >= 2 && x < 13) cout << "Yes";
    else cout << "No";

    return 0;
}