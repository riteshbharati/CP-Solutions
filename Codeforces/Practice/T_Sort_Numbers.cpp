#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"
#define yes "YES\n"
#define no "NO\n"

void solve() {
   vector<int>vec(3);
   cin>>vec[0];
   cin>>vec[1];
   cin>>vec[2];
   vector<int>temp = vec;
   sort(temp.begin(),temp.end());
   for(auto it:temp){
    cout<<it<<nl;
   }
   cout<<nl;
   for(auto val:vec){
    cout<<val<<nl;
   }

    
    
}

int main() {
    fastio;
    solve();
    return 0;
}