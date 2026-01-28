#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b){
        if(c%2==0){
            cout<<"Second"<<nl;
        }else{
            cout<<"First\n";
        }
    }else if(a>b){
        cout<<"First\n";
    }else{
        cout<<"Second\n";
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