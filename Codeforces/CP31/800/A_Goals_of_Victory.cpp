#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int n;
    cin>>n;
    vector<int>vec(n-1);
    int sum = 0;
    for(int i=0;i<n-1;i++){
        cin>>vec[i];
        sum+=vec[i];
    }
    if(sum<=0){
        cout<<abs(sum)<<nl;
    }else{
        cout<<'-'<<sum<<nl;
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