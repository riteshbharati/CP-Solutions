#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    ll n;
    cin>>n;
    ll squareCount = 0;
    ll cubeCount = 0;
    ll cnt = 0;
    for(int i=1;i*i<=n;i++){
        if(pow(i,2)<=n || pow(i,3)<=n){
            squareCount++;
        }
    }
    for(int i=1;i*i<=n;i++){
        if(pow(i,3)<=n){
            cubeCount++;
        }
    }
      for(int i=1;i*i<=n;i++){
        ll tmp = pow(i,2);
        if(pow(tmp,3)<=n){
            cnt++;
        }
    }

    cout<<squareCount + cubeCount - cnt <<nl;
    
    
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