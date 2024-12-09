#include  <iostream>
using namespace std;


void lp(int n){
    for(int i = 0; i < n; i++){
        if(i%2==0) cout << "##";
        else cout << "..";
    }
}

void lpo(int n){
    for(int i = 0; i < n; i++){
        if(i%2==0) cout << "..";
        else cout << "##";
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >>n;

        for(int i = 0; i < n; i++){
            if(i%2==0){
                lp(n);cout << '\n';lp(n);cout << '\n';
            }
            else{
                lpo(n);cout << '\n'; lpo(n); cout <<'\n';
            }
            
        }
    }
    
    return 0;
}