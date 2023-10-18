#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double n;
    cin >> n;   long long f = n;
    long long k = ceil(n/2);

    f%2==0 ? cout << k : cout << -k;
    
    return 0;
}