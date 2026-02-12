#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"
#define yes "YES\n"
#define no "NO\n"

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    vector<int>ans = vec;
    sort(ans.begin(),ans.end());
    int a=0;
    int x=0;
    for(int i=1;i<n;i++){
        if(abs(ans[i]-ans[i-1])<= k){
            a++;
             x = max(x,a);
        }else{
           
            a = 0;
        }
    }
  
    x++;
 
    cout<<n-x<<nl;
    
    
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