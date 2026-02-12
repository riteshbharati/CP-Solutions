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
    vector<ll>vec(n);
    vector<ll>prefix(n);
    for(ll i=0;i<n;i++){
        cin>>vec[i];
    }
    ll temp = q;
    prefix[0]= vec[0];
    for(ll i=1;i<n;i++){
        prefix[i] = prefix[i-1] + vec[i];
    }
    while(temp--){
        ll l,r,k;
        cin>>l>>r>>k;
        ll rem_sum = prefix[n-1] + prefix[l-1] - prefix[r-1] + vec[l-1];
        ll total = rem_sum + (r-l+1)*k;
        if(total%2==1){
            cout<<yes;
        }else{
            cout<<no;
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