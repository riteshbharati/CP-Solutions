#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"
#define yes "YES\n"
#define no "NO\n"

void solve() {
    ll n,q;
    cin>>n>>q;
    ll vec[n];
    ll prefix[n];
    for(ll i=0;i<n;i++){
        cin>>vec[i];
    }
    prefix[0] = vec[0];
    for(ll i=1;i<n;i++){
        prefix[i] = prefix[i-1]+vec[i];
    }
    while(q--){
        ll a,b;
        cin>>a>>b;
        ll ans;
        if(a==1){
            ans = prefix[b-1];
        }else ans = prefix[b-1] - prefix[a-2];
        cout<<ans<<nl;
    }
    
    
}

int main() {
    fastio;
    solve();
    return 0;
}