#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define nl "\n"

void solve() {
    ll n;
    cin>>n;
    ll temp = n;
    ll ans = 0;
    for(ll i=5;i<=n;i*=5){
        ans+=(temp/i);
    }
    cout<<ans<<nl;
    
    
}

int main() {
    fast_io();
    solve();
    return 0;
}