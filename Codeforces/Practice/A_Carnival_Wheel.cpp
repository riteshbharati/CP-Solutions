#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int l,a,b;
    cin>>l>>a>>b;
    int ans = a;
    for(int i=1;i<l;i++){
        int tmp = (a + (i*b))%l;
        ans = max(ans,tmp);
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