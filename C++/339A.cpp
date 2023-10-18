#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    char g[s.length()];

    for(int i=0; i < s.length(); i++){
        g[i] = s.at(i);
    }

    char tmp;
    for(int j=0; j < s.length(); j+=2){
        for(int f=0; f < (s.length()-1); f+=2){
            if(g[f] > g[f+2]){
                tmp = g[f];
                g[f] = g[f+2];
                g[f+2] = tmp;
            }
        }
    }

    for(int  h = 0; h < s.length(); h++){cout << g[h];};

    return 0;
}