#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int n;
    cin>>n;
    int ans = 0;
    if(n%3==0){
        cout<<0<<nl;
    }else{
        ans = n%3;
        cout<<3-ans<<nl;
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