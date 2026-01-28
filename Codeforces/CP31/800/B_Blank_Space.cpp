#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int freq=0,mx = 0;
    for(int val:vec){
        if(val==0){
            freq++;
            mx = max(mx,freq);

        }else{
            freq = 0;
        }
    }
    cout<<mx<<nl;



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