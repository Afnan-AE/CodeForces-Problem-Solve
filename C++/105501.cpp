#include <iostream>
using namespace std;

int ltn(char a){
    return (a - 48);
}

int Ctn(char a){
    switch (a)
    {
    case 'C': return 1; break;
    case 'D': return 2; break;
    case 'E': return 3; break;
    case 'F': return 4; break;
    case 'G': return 5; break;
    case 'A': return 6; break;
    case 'B': return 7; break;
    
    default:
        break;
    }
}

int main(){
    string a,b; cin >> a >> b;
    int aa = Ctn(a[0]), bb = Ctn(b[0]);
    int an = ltn(a[1]), bn = ltn(b[1]);
    int result = 0;

    int difcl = bn - an;

    if(difcl >= 1){
        int s1 = 0;
        if(aa < 4) s1 = 7-aa-1;
        else s1 = 7-aa;

        //for next.
        int s2 = 0;
        if(bb >= 4) s2 = bb-1-1;
        else s2 = (bb - 1);

        result = s1 + ((difcl-1)*5) + s2;
    }

    else if(difcl == 0){
        if(aa == 3 && bb == 4) result = 0;
        else if(aa < 4 && bb >= 4) result = (bb-aa)-1;
        else result = (bb-aa);
    }

    cout << result;


    return 0;
}