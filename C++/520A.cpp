#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    int i; string m;
    set<char> g;
    cin >> i >> m;
    transform(m.begin(), m.end(), m.begin(), ::tolower);

    for(int f = 0; f < i; f++){
        g.insert(m.at(f));
    }

    g.size() == 26 ? cout << "YES" : cout << "NO";


    return 0;
}