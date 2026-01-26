#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int n;
    cin>>n;
    int num = sqrt(n);
    if((num*num)==n){
        cout<<0<<" "<<num<<nl;
    }else{
        cout<<-1<<nl;
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