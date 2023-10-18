#include <iostream>
#include <set>
using namespace std;

int main(){
    int a, b, c, d, e;
    set <int> g;

    cin >> a >> b;
    while(b--){
        cin >> d;
        g.insert(d);
    }
    cin >> c;
    while(c--){
        cin >> e;
        g.insert(e);
    }

    if(g.size() == a){
        cout << "I become the guy.";
    }
    else{
        cout << "Oh, my keyboard!";
    }

    return 0;
}