#include <iostream>
#include <string>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    int d = max(x, y);

    const string P[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3","1/6"};
    
    cout << P[d];

    return 0;
}