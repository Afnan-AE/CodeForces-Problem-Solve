#include <iostream>
using namespace std;

int main(){
    int k, n;
    cin >>k>>n;
    int f[k];
    for(int i = 0; i < k; i++) cin >> f[i];

    //sort
    int tmp = 0;
    for(int j = 0; j < k; j++){
        for(int l = 0; l < k-1; l++){
            if(f[l] > f[l+1]){
                tmp = f[l];
                f[l] = f[l+1];
                f[l+1] = tmp;
            }
        }
    }

    int er = 0;
    for(int t = 0; t < n; t++){
        if(f[t] <= 0) er += abs(f[t]);
    }


    cout << er << '\n';
    

    return 0;
}