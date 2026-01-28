#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int n;
    cin>>n;
    vector<int>vec(n);
    int count = 0;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        if(vec[i]%2==1){
            count++;
        }
    }
    if(count%2==0){
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