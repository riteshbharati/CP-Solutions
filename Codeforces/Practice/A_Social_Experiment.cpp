#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int n;
    cin>>n;
    if(n==2){
        cout<<2<<nl;
    }
    else if(n==3){
        cout<<3<<nl;
    }else{
        if(n%2==0){
            cout<<0<<nl;
        }else{
            cout<<1<<nl;
        }
    }
    
    
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
