#include <iostream>
using namespace std;

int main(){
    int f, x;
    cin >> f;

    while(f--){
        cin >> x;

        if(x == 1){
            cout << "HARD";
            break;
        }
        else if(f == 0){
            cout << "EASY";
        }
    }

    return 0;
}