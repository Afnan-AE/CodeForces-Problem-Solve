#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    string h;
    cin >> h;

    unordered_set<char> s;

    for(int i = 0; i < h.length(); i++){
        s.insert(h[i]);
    }

    
    if(s.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }

    return 0;
}