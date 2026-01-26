#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int n,x;
    cin>>n>>x;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int mx = max(2*abs(vec[n-1]-x),vec[0]);
    for(int i=1;i<n;i++){
        if(abs(vec[i]-vec[i-1])>mx){
            mx = abs(vec[i]-vec[i-1]);
        }
    }
    cout<<mx<<nl;
    
    
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