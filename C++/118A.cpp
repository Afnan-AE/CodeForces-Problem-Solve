#include <iostream>
using namespace std;


int main(){
    string s; cin >> s;
    string h;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != 'a' && 
           s[i] != 'e' &&
           s[i] != 'i' &&
           s[i] != 'o' &&
           s[i] != 'u' &&
           s[i] != 'y' &&
           s[i] != 'A' &&
           s[i] != 'E' &&
           s[i] != 'I' &&
           s[i] != 'O' &&
           s[i] != 'U' &&
           s[i] != 'Y') h.push_back(s[i]);
    }
    string result;

    for(int d = 0; d < h.length(); d++){
        if(h[d] < 97) h[d] += 32;
    }

    for(int j = 0; j < (h.length()*2); j++){
        if(j%2 != 0) result.push_back(h[(j-1)/2]);
        else if(j%2==0) result.push_back('.');
    }

    cout << result << '\n';

    return 0;
}