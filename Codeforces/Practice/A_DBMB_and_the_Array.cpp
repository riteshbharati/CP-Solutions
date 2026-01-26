#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int n,s,x;
    cin>>n>>s>>x;
    int sum = 0;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
        sum+=vec[i];
    }
    if(s>=sum && (s-sum)%x==0){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
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