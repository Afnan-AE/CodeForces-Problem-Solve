#include <iostream>
using namespace std;

int main(){
    int c, r;
    cin >> c >> r;

    for(int w = 1; w <= r; w++){
        cout << '#';
    }cout << endl;
    for(int q = 1; q <= r; q++){
        if(q == r){
            cout << '#';
        }
        else{
            cout << '.';
        }
    }cout << endl;

    for(int i = 3; i <= c; i++){
        for(int j = 1; j <= r; j++){
            if(i % 2 == 0 && i % 4 == 0){
                if(j==1){cout << '#';}
                else{cout << '.';}
            }
            else if(i % 2 == 0){
                if(j==r){cout<<'#';}
                else{cout << '.';}
            }
            else{
                cout << '#';
            }
        }
        cout << endl;
    }

    return 0;
}
