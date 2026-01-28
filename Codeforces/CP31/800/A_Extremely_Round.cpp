#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int n;
    cin>>n;
    int temp = n;
    int count = 0;
    while(temp!=0){
        temp/=10;
        count++;
    }
    int a = pow(10,count-1);
    int ans = 9*(count-1) + n/a;
    cout<<ans<<nl;
    
    
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