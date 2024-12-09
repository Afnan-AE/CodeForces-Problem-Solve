#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int f = 0; f < n; f++) cin >> a[f];

    int s=0, d=0;



    int inc = 0;
    int dec = (n-1);

    for(int i = 0; i < n; i++){
        if(i%2==0){
            if(a[inc] >= a[dec]){
                s+=a[inc];
                inc++;
            }
            else if(a[inc] < a[dec]){
                s+=a[dec];
                dec--;
            }
        }
        else if(i%2 != 0){
            if(a[inc] >= a[dec]){
                d+=a[inc];
                inc++;
            }
            else if(a[inc] < a[dec]){
                d+=a[dec];
                dec--;
            }
        }
    }

    cout << s << ' ' << d << '\n';

    return 0;
}