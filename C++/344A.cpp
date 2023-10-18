#include <iostream>
using namespace std;

int main(){
    int n, t = 0;
    cin >> n;
    string m[n];

    for(int i= 0; i < n; i++){
        cin >> m[i];
    }
    for(int j = 0; j < n; j++){
        if(m[j] != m[j+1]){
            t+=1;
        }
    }

    cout << t;

    return 0;
}