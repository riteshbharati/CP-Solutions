#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    ll n,k;
    cin>>n>>k;
    if(n%2==0 || (n-k)%2==0){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
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