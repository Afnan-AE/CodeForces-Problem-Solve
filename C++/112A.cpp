#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string f, j;
    int x = 0;

    cin >> f >> j;

    transform(f.begin(), f.end(), f.begin(), ::tolower);
    transform(j.begin(), j.end(), j.begin(), ::tolower);

    if(f==j){
        cout << "0";
    }
    else{
        for(int i = 0; i < f.length(); i++){

            if(f.at(i) > j.at(i)){
                cout << "1";
                break;
            }
            else if(f.at(i) < j.at(i)){
                cout << "-1";
                break;   
            }
        
        }
    }

    return 0;

}