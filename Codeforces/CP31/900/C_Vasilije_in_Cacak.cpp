#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"
#define yes "YES\n"
#define no "NO\n"

void solve() {
    ll n,k,x;
    cin>>n>>k>>x;
    ll max_sum = (n*(n+1)/2) - ((n-k)*(n-k+1))/2;
    ll min_sum = (k*(k+1))/2;
    if(x<=max_sum && x>=min_sum){
        cout<<yes;
    }else{
        cout<<no;
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