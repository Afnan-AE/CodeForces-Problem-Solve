#include <iostream>
using namespace std;


int main(){
    int n  , r = 0;
    cin >> n;
    while(n--){
        cin >> r;
        if(1900 <= r) cout << "Division 1" << '\n';
        else if(1600 <= r && r <= 1899) cout << "Division 2" << '\n';
        else if(1400 <= r && r <= 1599) cout << "Division 3" << '\n';
        else if(r <= 1399) cout << "Division 4" << '\n';
    }

    return 0;
}