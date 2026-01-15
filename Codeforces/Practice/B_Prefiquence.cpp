#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    int i=0,j=0;
    while(i<n && j <m){
        if(a[i]==b[j]){
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    cout<<i<<nl;
    
    
    
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
