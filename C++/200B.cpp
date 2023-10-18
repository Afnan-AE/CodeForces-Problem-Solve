#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double n, d, t = 0;
    cin >> n; int f = n;

    while(f--){
        cin >> d;
        t += d;
    }
    
    cout << fixed << setprecision(12) << t/n;

    return 0;
}