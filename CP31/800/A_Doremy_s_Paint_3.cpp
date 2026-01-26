#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    sort(v.begin(),v.end());
    int a = v[0];
    int b = v[n-1];
    if(mp.size()>2 || abs(mp[a]-mp[b])>1){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
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