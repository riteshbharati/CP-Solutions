#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define nl "\n"

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    if((a==b && c%2==0) || (b==c && a%2==0) || (c==a && b%2==0)) cout<<"YES\n";
     else if(a==(b+c) || b == (a+c) || c == (a+b)){
        cout<<"YES\n";
    }else cout<<"NO\n";
    
     
    
    
}

int main() {
    fast_io();
    int t;
    cin>>t;
    while(t--){
    solve();}
    return 0;
}