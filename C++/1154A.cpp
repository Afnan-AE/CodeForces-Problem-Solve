#include <iostream>
using namespace std;

void s(int x, int y,int z,int b){
     cout << b-x << ' ' << b - y << ' ' << b - z << '\n';
}


int main(){
     int x, y, z, k, b;
     cin >> x >> y >> z >> k;
     
     x>y ? b = x : b = y;
     if(b<z) b=z;
     if(b<k) b=k;

     if(b==x) s(y, z, k, b);
     else if(b==y) s(x, z, k, b);
     else if(b==z) s(x, y, k, b);
     else if(b==k) s(x, y, z, b);

     return 0;
     
}