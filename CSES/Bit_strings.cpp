#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define nl "\n"

void solve() {
    ll n;
    cin>>n;
    ll ans = 1;
    ll mod = 1e9 + 7;
    for(int i=1;i<=n;i++){
        ans*=2;
        ans%=mod;
    }
    cout<<(ans%mod);
    
    
}

int main() {
    fast_io();
    solve();
    return 0;
}
