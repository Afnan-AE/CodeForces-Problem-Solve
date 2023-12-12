#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    string g;
    int f[6];
    
    while(n--){
        cin >> g;
        int e;
        for(int r = 0; r < 6; r++){
            int e = g.at(r);
            f[r] = e - 48;
        }
        int t = f[0]+f[1]+f[2];
        int g = f[3]+f[4]+f[5];
        
        t==g ? cout << "YES\n" : cout << "NO\n";
    }
    
    return 0;
}