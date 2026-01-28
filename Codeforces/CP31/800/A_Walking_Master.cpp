#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll ans = -1;
    int vertical_move = abs(d-b);
    int intermediate_pos = a + vertical_move;
    if(d<b || intermediate_pos<c){
        cout<<ans<<nl;
    }else{
        ans = abs(intermediate_pos - c)+ vertical_move;
        cout<<ans<<nl;
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