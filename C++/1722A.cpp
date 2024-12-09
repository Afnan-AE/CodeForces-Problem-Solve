#include <iostream>
#include <set>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string g; cin >> g;
        if(n != 5) cout << "NO\n";
        else{
            set <char> g1;
            for(int r = 0; r < g.length(); r++){
                g1.insert(g[r]);
            }

            if(g1.size() != 5) cout << "NO\n";
            else{
                int count = 0;
                for(int i = 0; i < 5; i++){
                if(g[i] == 'T' ||
                g[i] == 'i' ||
                g[i] == 'm' ||
                g[i] == 'u' ||
                g[i] == 'r') count++;
                }
                count == 5 ? cout << "YES\n" : cout << "NO\n";
            }
        }
    }
    return 0;
}