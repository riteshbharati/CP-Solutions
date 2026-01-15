#include <bits/stdc++.h>
    using namespace std;
    
    #define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr)
    #define ll long long
    #define nl "\n"
    
    void solve(ll n) {
        if(n< 4 && n!=1){
            cout<<"NO SOLUTION";
            return ;
        }
        if(n==1){
            cout<<1;
            return;
        }
        for(ll i=1;i<=n;i++){
            if(i%2==0){
                cout<<i<<" ";
            }
        }
        for(ll j=1;j<=n;j++){
            if(j%2!=0){
                cout<<j<<" ";
            }
        }
        
        
        
    }
    
    int main() {
        fast_io();
        ll n;
        cin>>n;
        solve(n);
        return 0;
    }
