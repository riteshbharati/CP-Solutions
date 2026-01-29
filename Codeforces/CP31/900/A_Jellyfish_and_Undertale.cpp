#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"
#define yes "YES\n"
#define no "NO\n"

void solve() {
  ll a,b,n;
  cin>>a>>b>>n;
  vector<ll>vec(n);
  ll greater = 0,sum=0;
  for(ll i=0;i<n;i++){
    cin>>vec[i];
    if(vec[i]+1>=a){
        greater++;
    }else{
        sum+=vec[i];
    }
  }
  ll ans = (a-1)*greater + sum + b;
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