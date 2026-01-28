#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
     ll n;
     cin>>n;
     ll count = 0;
    vector<ll>vec(n);
    for(ll i=0;i<n;i++){
        cin>>vec[i];
        if(i>0 && (vec[i-1]%2)==(vec[i]%2) ){// write boundry condition(i>0) in the leftmost side else runtime error
            count++;
        }

    }
    cout<<count<<nl;


    
    
    
    
    
    
}

int main() {
    fastio;
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}