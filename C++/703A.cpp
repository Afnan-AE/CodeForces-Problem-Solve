#include <iostream>
using namespace std;

int main(){
    int n, x = 0, y = 0, m = 0, c = 0;
    cin >> n;
    while(n--){
        cin >> x >> y;
        if(x==y) continue;
        else x > y ? m++ : c++;
    }
    if(m==c){cout << "Friendship is magic!^^" << '\n';}
    else if(m>c){cout << "Mishka" << '\n';}
    else if(m<c){cout << "Chris" << '\n';}

    return 0;
}
