
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main(){
    string w;
    int T = 0;
    int t = 0;
 
    do{
        cin >> w;
    }while(w.length() < 1);
 
    for(int i = 0; i < w.length(); i++){
        if(w.at(i) >= 'A' && w.at(i) <= 'Z'){
            T += 1;
        }
    }
 
    for(int j = 0; j < w.length(); j++){
        if(w.at(j) >= 'a' && w.at(j) <= 'z'){
            t += 1;
        }
    }
 
    if(T > t){
        transform(w.begin(), w.end(), w.begin(), ::toupper);
        cout << w ;
    }
    else{
        transform(w.begin(), w.end(), w.begin(), ::tolower);
        cout << w ;
    }
    
    return 0;
}