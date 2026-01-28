#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    ll n;
    cin>>n;
    vector<ll>vec(n);
    for(ll i=0;i<n;i++){
        cin>>vec[i];
    }
   bool isZeroPresent = false;
    ll temp = abs(vec[0]);
    for(ll i=0;i<n;i++){
        if(vec[i]==0){
            isZeroPresent = true;
            break;
        }else if(abs(vec[i])<temp){
            temp = abs(vec[i]);
        }
    }
    if(isZeroPresent){
        cout<<0<<nl;
    }else{
        cout<<temp<<nl;
    }
    
    
}

int main() {
    fastio;
    solve();
    return 0;
}