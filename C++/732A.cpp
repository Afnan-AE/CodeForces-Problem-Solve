#include <iostream>
using namespace std;

int main(){
    int p, r;
    cin >> p >> r;

    int t = 0;
    bool ru = true;

    int po = p;

    while(ru){
        if(po % 10 == r || po % 10 == 0){
            t++;
            ru = false;
        }
        else{
            po += p;
            t++;
        }
    }

    cout << t;
    return 0;
}