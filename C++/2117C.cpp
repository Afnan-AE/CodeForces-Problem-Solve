#include <bits/stdc++.h>
#include <vector>
#include <set>
using namespace std;

void solve(){
    int n; 
    cin >> n;
    int ans = 0;

    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    set <int> cur, seen;
    for(int i = 0; i < n; i++){
        cur.insert(a[i]);
        seen.insert(a[i]);
        if(cur.size() == seen.size()){
            ans++;
            seen.clear();
        }
    }

    cout << ans << '\n';

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    
    while(t--) solve();

    return 0;
}