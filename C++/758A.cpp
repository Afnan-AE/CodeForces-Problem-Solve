#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++){
        cin >> ar[i];
    }

    int t = ar[0];
    for(int j = 0; j < n; j++){
        if(t <= ar[j]){
            t = ar[j];
        }

    }

    int to = 0;
    for(int w = 0; w < n; w++){
        if(ar[w]==t) continue;
        else if(ar[w] < t){
            to+= (t-ar[w]);
        }
    }

    cout << to << endl;

    return 0;

}