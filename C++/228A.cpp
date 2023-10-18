#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    int f = 0;

    cin >> a >> b >> c >> d;

    if(a == b || a == c || a == d){f++;}
    if(b == c || b == d){f++;}
    if(c == d){f++;}

    cout << f;

    return 0;
}