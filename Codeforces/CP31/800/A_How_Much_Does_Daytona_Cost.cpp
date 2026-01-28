#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    bool isFound = false;
    for(int i=0;i<n;i++){
        if(vec[i]==k){
            isFound = true;
            break;
        }
    }
    if(isFound){
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