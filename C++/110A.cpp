#include <iostream>
using namespace std;

int main(){
    string f;
    int x = 0;

    cin >> f;

    for(int i = 0; i < f.length();i++){
        if(f.at(i) == '4' || f.at(i) == '7'){
            x += 1;
        }
    }


    if(x == 4 || x == 7){
        cout << "YES";
    }
    else{cout << "NO";}

    return 0;
}