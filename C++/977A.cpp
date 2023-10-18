#include <iostream>
using namespace std;

int main(){
    int f, x, t;
    cin >> f >> x;

    while (x--)
    {
        if(f % 10 == 0){
            f = f / 10;
        }
        else{
            f = f - 1;
        }
        
    }

    cout << f;

    return 0;

}