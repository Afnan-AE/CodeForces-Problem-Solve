#include <iostream>
using namespace std;

int main(){

    long long t ; cin >> t;
    while(t--){

        long long n; cin >> n;

        long long s = (n*(n+1))/2;

        long long r = s/n;

        cout << r << '\n';

    }

    return 0;
}