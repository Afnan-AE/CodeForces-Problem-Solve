#include <iostream>
using namespace std;


int main(){
    long long k, n; cin >> k >> n;
    long long r = 0;
    
    //odd
    long long e = 0;
    long long o = 0;

    if(k%2 != 0){
        o = k/2 + 1;
        if(n > o){
            r = (n-o)*2;
        }
        else if(n <= o){
            r = (n*2)-1;
        }
    }
    
    //even
    else if(k%2 == 0){
        e = k/2;   
        if(n > e){
            r = (n-e)*2;
        }
        else if(n <= e){
            r = (n*2)-1;
        }
    }
    cout << r << '\n';

    return 0;
}