#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    ll a,b;
    cin>>a>>b;
    // This one is pattern recognition and edge cases thinking
    ll temp = a+b;
    if(a==0 && b==0){
        cout<<"YES\n";
    }
    else if(temp%3==0 && max(a,b)<=2*min(a,b) && min(a,b)>=1){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    /*
    Consider solutions of 2x + y =a and x+2y=b where x,y are non negative integers...

     if((2*a - b)%3==0 && (2*b - a)%3==0 && max(a,b)<=2*min(a,b)){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }


    */
    
    
    
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