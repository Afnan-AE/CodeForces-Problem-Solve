#include <iostream>
using namespace std;

class Solution{
    public:
    int calculate(int k, int a, int b){
        if(k==0) return 0;
        else if(k==1) return a;
        else if(k==2){
            if(2*a >= b) return b;
            else return a;
        }
        else {
            int e, eo, t, R, r;
            R=k%2;
            e=k-R;
            eo=e/2;
            r = a*R;
            if((e*a)<(eo*b)) return ((e*a)+r);
            else return ((eo*b)+r);
        }
    }
};
int main(){
    Solution l;
    int k; cin >> k;
    while(k--){
        int k, a, b;
        cin >> k >> a >> b;
        int total = l.calculate(k, a, b);
        cout << total << '\n';
    }
    return 0;
}