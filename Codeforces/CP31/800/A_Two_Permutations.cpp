#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int n,a,b;
    cin>>n>>a>>b;
    if(n==1){
        if(a==1 && b==1){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }else if(n==2){
        if(a==2 && b==2){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }else if(n==3){
        if(a==3 && b==3){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }else{
        if((a+b+2)<=n || (a==n && b==n)){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
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