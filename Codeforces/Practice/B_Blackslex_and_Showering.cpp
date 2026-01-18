#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    ll n;
    cin>>n;
    ll arr[n+1];
    for(int i=1;i<=n;i++) cin>>arr[i];
    ll sum = 0;
    for(int i=2;i<=n;i++) sum += abs(arr[i]-arr[i-1]);
    ll ans = min(sum-abs(arr[2]-arr[1]),sum-abs(arr[n]-arr[n-1]));
    for(int i=2;i<n;i++){
        ans = min(ans,sum-abs(arr[i]-arr[i-1])-abs(arr[i+1]-arr[i]) + abs(arr[i+1]-arr[i-1]));
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