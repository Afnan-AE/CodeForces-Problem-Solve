#include <iostream>
using namespace std;

int main(){
    int t, x;
    cin >> t;



    while(t--){

        cin >> x;


        if(x <= 2){
            cout << 0 << '\n';
        }
        else{
            int h = -1;
            int x1 = 0;
            while(x1 < x){
                x--;
                x1++;
                h++;
            }
            cout << h << '\n';
        }


    }

    return 0;
}