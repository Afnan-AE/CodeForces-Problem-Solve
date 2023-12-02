#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    set<char> g;
    string f; 
    getline(cin, f);
    
    for(int i = 0; i < f.length(); i++){
        if((f.at(i) >= 'a' && f.at(i) <= 'z') || (f.at(i) >= 'A' && f.at(i) <= 'Z')){
            g.insert(f.at(i));
        }
    }
    cout << g.size();

    return 0;
}