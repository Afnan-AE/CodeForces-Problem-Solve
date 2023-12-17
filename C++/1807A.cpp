#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;


    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        int x = a + b;
        int y = a - b;

        x == c ? cout << '+' : cout << '-';
        cout << endl;
    }



    return 0;
}
