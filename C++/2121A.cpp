#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,s;
        cin >> n >> s;
        int ar[n];

        for(int i = 0; i < n; i++){
            cin >> ar[i];
        }

        int total;
        int d1 = abs(s - ar[0]);
        int d2 = abs(s - ar[n-1]);

        if(d1 == d2){
            total = (d1 + (ar[n-1] - ar[0]));
        }
        else if(d1 < d2){
            total = (d1 + (ar[n-1] - ar[0]));
        }
        else{
            total = (d2 + (ar[n-1] - ar[0]));
        }

        cout << total << '\n';
    }
    return 0;
}