#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int test; cin >> test;
    while(test--){
        string s; cin >> s;
        int i = stoi(s);

        int to=1, x = i, ten = pow(10, (s.length()-1));

        if(x % ten == 0){
            cout << to << '\n' << x << '\n';
        }
        else{
            to=1, x = i, ten = pow(10, (s.length()-1));
            while(x > 10){
                if((x/ten)*ten==0){
                    to--;
                }
                to++;
                x = x%ten;
                ten /= 10;
            }if(x==0){to--;}
            cout << to << endl;

            to=0, x = i, ten = pow(10, (s.length()-1));
            do{
                if((x/ten)*ten!=0){
                    cout << (x/ten)*ten << ' ';
                }
                x = x%ten;
                ten /= 10;
                to++;
            }while(x >= 10);
            if(x > 0){
                cout << x << endl;
            }else{cout << endl;}
        }
    }
    return 0;
}