#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        string a; cin >> a;

        int A,B,C,D,E,F,G;
        A=B=C=D=E=F=G=0;

        for(int i = 0; i < n; i++){
            switch (a[i])
            {
            case 'A' : A++; break;
            case 'B' : B++; break;
            case 'C' : C++; break;
            case 'D' : D++; break;
            case 'E' : E++; break;
            case 'F' : F++; break;
            case 'G' : G++; break; 
            default:
                break;
            }
        }

        int total = 0;
        if(A < m) total+=(m-A);
        if(B < m) total+=(m-B);
        if(C < m) total+=(m-C);
        if(D < m) total+=(m-D);
        if(E < m) total+=(m-E);
        if(F < m) total+=(m-F);
        if(G < m) total+=(m-G);

        cout << total << '\n';
    }

    return 0;
    
}