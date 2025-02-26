#include <iostream>
using namespace std;

int main(){
    int n, t; cin >> n >> t;
    string s; cin >> s;

    char tmp = NULL;
    for(int i = 0; i < t; i++){
        for(int j = 0; j < n; j++){
            if(s[j] == 'B' && s[j+1] == 'G'){
                tmp = s[j];
                s[j] = s[j+1];
                s[j+1] = tmp;
                j++;
            }
        }   
    }

    cout << s;

    return 0;
}