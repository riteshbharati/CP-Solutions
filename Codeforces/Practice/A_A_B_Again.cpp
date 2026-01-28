#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int n;
    cin>>n;
    int temp = n;
    int sum = 0;
    while(temp){
        int rem = temp%10;
        sum+=rem;
        temp/=10;
    }
    cout<<sum<<nl;
    
    
    
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