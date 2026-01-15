#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define nl "\n"

void solve() {
    ll n;
    cin>>n;
    ll arr[n];
    ll cnt = 1;
    set<ll>st;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        st.insert(arr[i]);
    }
    cout<<st.size()<<nl;

    
    
    
    
}

int main() {
    fast_io();
    solve();
    return 0;
}
