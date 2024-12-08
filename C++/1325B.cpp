#include <iostream>
#include <set>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
            set<int> g;
        int n; cin >> n;
        int f = 0;
        for(int i = 0; i < n; i++){
            cin >> f;
            g.insert(f);
        }
        int result = g.size();

        cout << result << '\n';
    }
    return 0;
}