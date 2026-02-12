#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"
#define yes "YES\n"
#define no "NO\n"

void solve() {
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    if(n%2==0){
        cout<<2<<nl;
        cout<<1<<" "<<n<<nl;
        cout<<1<<" "<<n;

    }else{
        cout<<4<<nl;
        cout<<1<<" "<<n<<nl;
        cout<<2<<" "<<n<<nl;
        cout<<1<<" "<<2<<nl;;
        cout<<1<<" "<<2;
    }
    cout<<nl;
    
    
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