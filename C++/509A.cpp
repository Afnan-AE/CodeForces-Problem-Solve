#include <iostream>
using namespace std;

long long perm(int n){
    long long r = 1;
    while(n > 1){ r *= n; n--;}
    return r;
}

int main(){
    int n; cin >> n;
    int t, a, r;

    t = n + (n - 2);

    long long t1 = perm(t);

    r = t/2;

    long long r1 = perm(r);

    long long tr = perm(t-r);

    a = t1 / (r1 * tr);

    cout << a;

    return 0;
}