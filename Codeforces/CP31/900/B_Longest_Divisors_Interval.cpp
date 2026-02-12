#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"
#define yes "YES\n"
#define no "NO\n"

void solve() {
    ll n;
    cin>>n;
    ll ans = 1;
    ll j =2;
    while(n%j==0){
        ans++;
        j++;
        if(n%j!=0){
            break;
        }
    }
    cout<<ans<<nl;
    
    
    
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