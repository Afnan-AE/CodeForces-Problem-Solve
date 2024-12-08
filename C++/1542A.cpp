#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        int m = n*2;
        int t;
        int even = 0, odd = 0;
        for(int i = 0; i < m; i++){
            cin >> t;
            t%2==0? even++ : odd++;
        }
        even == odd ? cout << "YES" << '\n' : cout << "NO" << '\n';

    }

    return 0;
}