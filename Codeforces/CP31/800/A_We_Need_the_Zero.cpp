#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int n;
    cin>>n;
    vector<int>vec(n);
    int ans = 0;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        ans^=vec[i];
    }
    if(n%2==1){
        cout<<ans<<nl;
    }else{
        if(ans==0){
            cout<<0<<nl;
        }else{
            cout<<-1<<nl;
        }
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