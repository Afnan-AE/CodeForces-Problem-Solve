#include <iostream>
using namespace std;

int main(){
    int co;
    cin >> co;
    int b[5] = {100,20,10,5,1};

    int a,f, t = 0;
    a = co / b[0]; t += a; f = co % b[0];
    a = f / b[1]; t += a; f = f % b[1];
    a = f / b[2]; t += a; f = f % b[2];
    a = f / b[3]; t += a; f = f % b[3];
    a = f / b[4]; t += a; f = f % b[4];

    cout << t;

    return 0;

}