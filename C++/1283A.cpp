#include <iostream>
using namespace std;

int main(){
    int n, h=0, m=0;
    cin >> n;
    while(n--){
        cin >> h >> m;
        cout << (1440 - ((h*60)+m)) << '\n';
    }

    return 0;
}
